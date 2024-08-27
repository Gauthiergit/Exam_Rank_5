#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class ASpell;

class Warlock
{
private:
    std::string name;
    std::string title;
    std::map<std::string, ASpell*> stock;
    Warlock();
    Warlock(const Warlock& copy);
    Warlock& operator=(const Warlock& change);
public:
    Warlock(const std::string& _name, const std::string& _title);
    ~Warlock();

    const std::string& getName() const;
    const std::string& getTitle() const;
    void setTitle(const std::string &_title);
    void introduce() const;
    void learnSpell(ASpell* spell);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget const& target);
};

#endif
