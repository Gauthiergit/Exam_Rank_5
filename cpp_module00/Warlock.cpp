#include "Warlock.hpp"

Warlock::Warlock(const std::string& _name, const std::string& _title) : name(_name), title(_title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(){}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
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
