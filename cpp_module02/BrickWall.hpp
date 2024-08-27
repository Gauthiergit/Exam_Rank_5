#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
public:
    BrickWall();
    ~BrickWall();
    BrickWall(const BrickWall& copy);
    BrickWall& operator=(const BrickWall& change);

    virtual BrickWall* clone() const;
};

#endif