#ifndef DEVELOPER_H_FJFSUBGBTBITDAD
#define DEVELOPER_H_FJFSUBGBTBITDAD

#include <string>

class developer
{
   private:
    std::string name;
    std::string alias;

    virtual void solve_problem() const = 0;

   public:
    developer(std::string _name, std::string _alias);

    static void drink_coffee();

    std::string get_name();
    std::string get_alias();

    /*
    Außerhalb der Klasse soll zusätzlich der Stream-Operator (<<) so implementiert werden, dass die Klasse Developer
    direkt mit std::cout verwendet werden kann
    */
};

#endif
