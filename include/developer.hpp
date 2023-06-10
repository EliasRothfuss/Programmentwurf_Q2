#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>

class Developer  // Base Class Developer
{
   protected:
    std::string name_;   // Name of the developer
    std::string alias_;  // Alias of the developer
    void solve_problem_template() const;

   public:
    Developer(std::string name, std::string alias);  // Constructor to set the name and alias of the Developer
    virtual ~Developer() {};
    
    static void drink_coffee();              // Imported method ;)
    virtual void solve_problem() const = 0;  // vi

    std::string get_name() const;   // Get the name of the Developer
    std::string get_alias() const;  // Get the alias of the Developer
};

auto operator<<(std::ostream& stream, const Developer& dev)
    -> std::ostream&;  // Overloaded operator << to output Developer name and alias

class SeniorDeveloper : public Developer
{
   public:
    SeniorDeveloper(std::string name, std::string alias);  // Constructor for the SeniorDeveloper class

    virtual void solve_problem() const override;  // Implementation of the solve_problem method for the SeniorDeveloper class
};

class JuniorDeveloper : public Developer
{
   public:
    JuniorDeveloper(std::string name, std::string alias);  // Constructor for the JuniorDeveloper class

    virtual void solve_problem() const override;  // Implementation of the solve_problem method for the JuniorDeveloper class
};

#endif
