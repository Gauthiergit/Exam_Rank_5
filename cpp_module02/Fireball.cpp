#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp"){}

Fireball::~Fireball(){}

Fireball::Fireball(const Fireball& copy) : ASpell(copy)
{
    *this = copy;
}

Fireball& Fireball::operator=(const Fireball& change)
{
    this->name = change.name;
    this->effects = change.effects;
    return (*this);
}

Fireball* Fireball::clone() const
{
    return (new Fireball());
}