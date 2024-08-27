#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(){}

Fwoosh::Fwoosh(const Fwoosh& copy) : ASpell(copy)
{
    *this = copy;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& change)
{
    this->name = change.name;
    this->effects = change.effects;
    return (*this);
}

Fwoosh* Fwoosh::clone() const
{
    return (new Fwoosh());
}