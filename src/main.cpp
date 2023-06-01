#include <stdint.h>
#include <memory>
#include <vector>

#include <iostream>

#include "developer.hpp"

auto main() -> int
{
    std::vector<std::shared_ptr<developer>> developer_vec; //created vector for developer

    developer_vec.push_back(std::make_shared<senior_developer>("M","Z")); //add class senior_developer to vector
    developer_vec.push_back(std::make_shared<junior_developer>("M","M")); //add class junior_developer to vector

    for(auto &itr : developer_vec) //loop over developer_vec elements
    {
        itr->solve_problem(); //call solve_problem method for elements in vector
    }

    return 0;
}