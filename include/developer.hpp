#ifndef DEVELOPER_H_FJFSUBGBTBITDAD
#define DEVELOPER_H_FJFSUBGBTBITDAD

#include <string>

class developer  // Base Class Developer
{
   protected:
    std::string name;   // Name of the developer
    std::string alias;  // Alias of the developer

   public:
    developer(std::string _name, std::string _alias);  // Constructor to set the name and alias of the developer

    static void drink_coffee();  // Imported method ;)
    virtual void solve_problem() const = 0;  // vi

    std::string get_name() const;   // Get the name of the developer
    std::string get_alias() const;  // Get the alias of the developer
};

auto operator<<(std::ostream& stream, const developer& dev)
    -> std::ostream&;  // Overloaded operator << to output developer name and alias

class senior_developer : public developer
{
   public:
    senior_developer(std::string _name, std::string _alias);  // Constructor for the senior_developer class

    void solve_problem() const override;  // Implementation of the solve_problem method for the senior_developer class
};

class junior_developer : public developer
{
   public:
    junior_developer(std::string _name, std::string _alias);  // Constructor for the junior_developer class

    void solve_problem() const override;  // Implementation of the solve_problem method for the junior_developer class
};

#endif
