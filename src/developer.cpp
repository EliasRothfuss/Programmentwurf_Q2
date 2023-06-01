#include "developer.hpp"

#include <iostream>
#include <string>

Developer::Developer(std::string name, std::string alias)  // Base Class Constructor
{
    Developer::name_ = name;    // Set Developer Name
    Developer::alias_ = alias;  // Set Developer Alias
}

void Developer::drink_coffee()
{
    std::cout << "I need some Coffee" << std::endl;
}

std::string Developer::get_name() const  // Get the name of the Developer
{
    return Developer::name_;
}

std::string Developer::get_alias() const  // Get the alias of the Developer
{
    return Developer::alias_;
}

auto operator<<(std::ostream& stream, const Developer& dev)
    -> std::ostream&  // Overloaded operator << to output Developer name and alias
{
    stream << "Name: " << dev.get_name() << " Alias: " << dev.get_alias() << std::endl;
    return stream;
}

SeniorDeveloper::SeniorDeveloper(std::string name, std::string alias)
    : Developer(name, alias)  // Constructor for the SeniorDeveloper class
{
}

JuniorDeveloper::JuniorDeveloper(std::string name, std::string alias)
    : Developer(name, alias)  // Constructor for the JuniorDeveloper class
{
}

void JuniorDeveloper::solve_problem()
    const  // Implementation of the solve_problem method for the JuniorDeveloper class
{
    Developer::drink_coffee();
}

void SeniorDeveloper::solve_problem()
    const  // Implementation of the solve_problem method for the SeniorDeveloper class
{
    Developer::drink_coffee();
}
