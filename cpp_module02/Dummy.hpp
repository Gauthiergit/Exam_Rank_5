#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
public:
    Dummy();
    ~Dummy();
    Dummy(const Dummy& copy);
    Dummy& operator=(const Dummy& change);

    virtual Dummy* clone() const;
};

#endif