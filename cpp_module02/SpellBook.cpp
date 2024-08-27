#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it = this->stock.begin(); it != this->stock.end(); it++)
        delete it->second;
    this->stock.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (this->stock.find(spell->getName()) == this->stock.end())
        this->stock[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string& spell_name)
{
    std::map<std::string, ASpell*>::iterator it = this->stock.find(spell_name);
    if (it != this->stock.end())
    {
        delete it->second;
        this->stock.erase(it);
    }
}

ASpell* SpellBook::createSpell(const std::string& spell_name)
{
    ASpell* copy = NULL;
    if (this->stock.find(spell_name) != this->stock.end())
        copy = this->stock[spell_name];
    return (copy);
}