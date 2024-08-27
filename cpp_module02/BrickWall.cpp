#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall"){}

BrickWall::~BrickWall(){}

BrickWall::BrickWall(const BrickWall& copy) : ATarget(copy)
{
    *this = copy;
}

BrickWall& BrickWall::operator=(const BrickWall& change)
{
    this->type = change.type;
    return (*this);
}

BrickWall* BrickWall::clone() const
{
    return (new BrickWall());
}