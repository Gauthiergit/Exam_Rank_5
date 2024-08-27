#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
    ASpell();
protected:
    std::string name;
    std::string effects;
public:
    ASpell(const std::string& _name, const std::string& _effects);
    virtual ~ASpell();
    ASpell(const ASpell& copy);
    ASpell& operator=(const ASpell& change);

    const std::string& getName() const;
    const std::string& getEffects() const;
    virtual ASpell* clone() const = 0;
    void launch(const ATarget& target);
};

#endif