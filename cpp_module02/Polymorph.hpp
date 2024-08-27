#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
public:
    Polymorph();
    ~Polymorph();
    Polymorph(const Polymorph& copy);
    Polymorph& operator=(const Polymorph& change);

    virtual Polymorph* clone() const;
};

#endif