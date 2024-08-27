#include "Warlock.hpp"

Warlock::Warlock(const std::string& _name, const std::string& _title) : name(_name), title(_title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(){}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell*>::iterator it = this->stock.begin(); it != this->stock.end(); it++)
        delete it->second;
    this->stock.clear();
}

Warlock::Warlock(const Warlock& copy)
{
    *this = copy;
}

Warlock& Warlock::operator=(const Warlock& change)
{
    this->name = change.name;
    this->title = change.title;
    return (*this);
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

const std::string& Warlock::getName() const
{
    return (this->name);
}

const std::string& Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::setTitle(const std::string &_title)
{
    this->title = _title;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (this->stock.find(spell->getName()) == this->stock.end())
        this->stock[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell_name)
{
    std::map<std::string, ASpell*>::iterator it = this->stock.find(spell_name);
    if (it != this->stock.end())
    {
        delete it->second;
        this->stock.erase(it);
    }
}

void Warlock::launchSpell(std::string spell_name, const ATarget& target)
{
    if (this->stock.find(spell_name) != this->stock.end())
        this->stock[spell_name]->launch(target);
}