#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy"){}

Dummy::~Dummy(){}

Dummy::Dummy(const Dummy& copy) : ATarget(copy)
{
    *this = copy;
}

Dummy& Dummy::operator=(const Dummy& change)
{
    this->type = change.type;
    return (*this);
}

Dummy* Dummy::clone() const
{
    return (new Dummy());
}