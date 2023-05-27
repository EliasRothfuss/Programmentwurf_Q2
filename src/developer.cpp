#include "developer.hpp"

#include <iostream>
#include <string>

developer::developer(std::string _name, std::string _alias)
{
    developer::name = _name;
    developer::alias = _alias;
}

void developer::drink_coffee()
{
    std::cout << "I need some Coffee" << std::endl;
}

std::string developer::get_name()
{
    return developer::name;
}

std::string developer::get_alias()
{
    return developer::alias;
}

senior_developer::senior_developer(std::string _name, std::string _alias): developer(_name, _alias)
{

}         

junior_developer::junior_developer(std::string _name, std::string _alias):developer(_name , _alias)
{
        
}

void junior_developer::solve_problem() const
{
    drink_coffee();
}

void senior_developer::solve_problem() const
{
    drink_coffee();
}

