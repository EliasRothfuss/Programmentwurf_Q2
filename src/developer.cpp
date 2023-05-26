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
