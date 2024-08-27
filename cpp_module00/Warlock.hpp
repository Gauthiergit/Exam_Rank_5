#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock
{
private:
    std::string name;
    std::string title;
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
};

#endif
