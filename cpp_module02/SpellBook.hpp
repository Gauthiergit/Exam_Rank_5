#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook
{
private:
    std::map<std::string, ASpell*> stock;
    SpellBook(const SpellBook& copy);
    SpellBook& operator=(const SpellBook& change);
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spell_name);
    ASpell* createSpell(const std::string& spell_name);
};

#endif
