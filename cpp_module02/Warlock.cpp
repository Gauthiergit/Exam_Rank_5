#include "Warlock.hpp"

Warlock::Warlock(const std::string& _name, const std::string& _title) : name(_name), title(_title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

std::string Warlock::getName() const
{
    return (this->name);
}

std::string Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::setTitle(const std::string &_title)
{
    this->title = _title;
}

void Warlock::learnSpell(ASpell* spell)
{
    this->_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell_name)
{
    this->_SpellBook.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const& target)
{
    if (this->_SpellBook.createSpell(spell_name))
        this->_SpellBook.createSpell(spell_name)->launch(target);
}
