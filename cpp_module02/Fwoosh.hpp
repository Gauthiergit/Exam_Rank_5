#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
public:
    Fwoosh();
    ~Fwoosh();
    Fwoosh(const Fwoosh& copy);
    Fwoosh& operator=(const Fwoosh& change);

    virtual Fwoosh* clone() const;
};

#endif