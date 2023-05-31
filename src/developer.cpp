#include "developer.hpp"

#include <iostream>
#include <string>

developer::developer(std::string _name, std::string _alias)  // Base Class Constructor
{
    developer::name = _name;    // Set Developer Name
    developer::alias = _alias;  // Set Developer Alias
}

void developer::drink_coffee()
{
    std::cout << "I need some Coffee" << std::endl;
}

std::string developer::get_name() const  // Get the name of the developer
{
    return developer::name;
}

std::string developer::get_alias() const  // Get the alias of the developer
{
    return developer::alias;
}

auto operator<<(std::ostream& stream, const developer& dev)
    -> std::ostream&  // Overloaded operator << to output developer name and alias
{
    stream << "Name: " << dev.get_name() << " Alias: " << dev.get_alias() << std::endl;
    return stream;
}

senior_developer::senior_developer(std::string _name, std::string _alias)
    : developer(_name, _alias)  // Constructor for the senior_developer class
{
}

junior_developer::junior_developer(std::string _name, std::string _alias)
    : developer(_name, _alias)  // Constructor for the junior_developer class
{
}

void junior_developer::solve_problem()
    const  // Implementation of the solve_problem method for the junior_developer class
{
    developer::drink_coffee();
}

void senior_developer::solve_problem()
    const  // Implementation of the solve_problem method for the senior_developer class
{
    developer::drink_coffee();
}
