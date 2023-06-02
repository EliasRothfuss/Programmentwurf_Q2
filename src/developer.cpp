#include "developer.hpp"

#include <iostream>
#include <string>

#define spacer std::cout << "------------------" << std::endl

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

void Developer::solve_problem_template() const
{
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this;
}

auto operator<<(std::ostream& stream, const Developer& dev)
    -> std::ostream&  // Overloaded operator << to output Developer name and alias
{
    stream << "Name: " << dev.get_name() << "\nAlias: " << dev.get_alias() << std::endl;
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

void JuniorDeveloper::solve_problem() const  // Implementation of the solve_problem method for the JuniorDeveloper class
{
    spacer;
    this -> solve_problem_template();
    std::cout << "Puh, that was tough" << std::endl;
    Developer::drink_coffee();
    spacer;
}

void SeniorDeveloper::solve_problem() const  // Implementation of the solve_problem method for the SeniorDeveloper class
{
    spacer;
    this -> solve_problem_template();
    std::cout << "Ha, that was EZ!" << std::endl;
    Developer::drink_coffee();
    spacer;
}
