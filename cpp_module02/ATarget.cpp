#include "ATarget.hpp"

ATarget::ATarget(const std::string& _type) : type(_type){}

ATarget::~ATarget(){}

ATarget::ATarget(const ATarget& copy)
{
    *this = copy;
}

ATarget& ATarget::operator=(const ATarget& change)
{
    this->type = change.type;
    return (*this);
}

const std::string& ATarget::getType() const
{
    return (this->type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}