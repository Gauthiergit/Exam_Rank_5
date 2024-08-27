#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    ATarget();
protected:
    std::string type;
public:
    ATarget(const std::string& _type);
    virtual ~ATarget();
    ATarget(const ATarget& copy);
    ATarget& operator=(const ATarget& change);

    const std::string& getType() const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell& spell) const;
};

#endif