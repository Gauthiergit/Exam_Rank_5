#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter"){}

Polymorph::~Polymorph(){}

Polymorph::Polymorph(const Polymorph& copy) : ASpell(copy)
{
    *this = copy;
}

Polymorph& Polymorph::operator=(const Polymorph& change)
{
    this->name = change.name;
    this->effects = change.effects;
    return (*this);
}

Polymorph* Polymorph::clone() const
{
    return (new Polymorph());
}