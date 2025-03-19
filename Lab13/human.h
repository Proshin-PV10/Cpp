#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// human.h
#pragma once
class human 
{
public:
    human(std::string last_name, std::string name, std::string second_name)
        : last_name(last_name), name(name), second_name(second_name) {}

    virtual void get_info() const = 0; 

    std::string get_full_name() const 
    {
        std::ostringstream full_name;
        full_name << this->last_name << " " << this->name << " " << this->second_name;
        return full_name.str();
    }

protected:
    std::string name;
    std::string last_name;
    std::string second_name;
};