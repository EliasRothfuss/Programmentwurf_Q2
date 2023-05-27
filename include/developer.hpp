#ifndef DEVELOPER_H_FJFSUBGBTBITDAD
#define DEVELOPER_H_FJFSUBGBTBITDAD

#include <string>

class developer
{
   public:

    std::string name;
    std::string alias;

    developer(std::string _name, std::string _alias);

    static void drink_coffee();

    std::string get_name();
    std::string get_alias();

    virtual void solve_problem() const = 0;

    /*
    Außerhalb der Klasse soll zusätzlich der Stream-Operator (<<) so implementiert werden, dass die Klasse Developer
    direkt mit std::cout verwendet werden kann
    */
};

class senior_developer : public developer
{
    public:
        senior_developer(std::string _name, std::string _alias);

        void solve_problem() const override;
};

class junior_developer : public developer
{
    public:
        junior_developer(std::string _name, std::string _alias);
    
        void solve_problem() const override;

};

#endif
