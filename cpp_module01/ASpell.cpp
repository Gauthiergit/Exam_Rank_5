#include "ASpell.hpp"

ASpell::ASpell(const std::string& _name, const std::string& _effects) : name(_name), effects(_effects) {}

ASpell::~ASpell(){}

ASpell::ASpell(const ASpell& copy)
{
    *this = copy;
}

ASpell& ASpell::operator=(const ASpell& change)
{
    this->name = change.name;
    this->effects = change.effects;
    return (*this);
}

const std::string& ASpell::getName() const
{
    return (this->name);
}

const std::string& ASpell::getEffects() const
{
    return (this->effects);
}

void ASpell::launch(const ATarget& target)
{
    target.getHitBySpell(*this);
}