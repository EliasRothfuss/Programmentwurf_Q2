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
    /// @brief Constructor to set the name and alias of the Developer
    /// @param name 
    /// @param alias 
    Developer(std::string name, std::string alias);
    virtual ~Developer() = default;

    static void drink_coffee();              // Imported method ;)
    virtual void solve_problem() const = 0;  // vi

    /// @brief get the name of the developer
    /// @return std::string of name
    auto get_name() const -> std::string;  
    
    /// @brief get the name of the developer
    /// @return std::string of alias
    auto get_alias() const -> std::string;  
};

/// @brief Overloaded operator << to output Developer name and alias
/// @param stream 
/// @param dev 
/// @return std::ostream&;
auto operator<<(std::ostream& stream, const Developer& dev)
    -> std::ostream&;  

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
