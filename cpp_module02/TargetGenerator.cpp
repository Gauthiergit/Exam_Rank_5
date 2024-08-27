#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
        delete it->second;
    this->targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* spell)
{
    if (this->targets.find(spell->getType()) == this->targets.end())
        this->targets[spell->getType()] = spell->clone();
}

void TargetGenerator::forgetTargetType(const std::string& target_type)
{
    std::map<std::string, ATarget*>::iterator it = this->targets.find(target_type);
    if (it != this->targets.end())
    {
        delete it->second;
        this->targets.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(const std::string& target_type)
{
    ATarget* copy = NULL;
    if (this->targets.find(target_type) != this->targets.end())
        copy = this->targets[target_type];
    return (copy);
}