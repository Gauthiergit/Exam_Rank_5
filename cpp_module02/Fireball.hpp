#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
public:
    Fireball();
    ~Fireball();
    Fireball(const Fireball& copy);
    Fireball& operator=(const Fireball& change);

    virtual Fireball* clone() const;
};

#endif