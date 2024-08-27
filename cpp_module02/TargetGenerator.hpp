#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
private:
    std::map<std::string, ATarget*> targets;
    TargetGenerator(const TargetGenerator& copy);
    TargetGenerator& operator=(const TargetGenerator& change);
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(const std::string& target_type);
    ATarget* createTarget(const std::string& target_type);
};

#endif