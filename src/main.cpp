#include <stdint.h>
#include <memory>
#include <vector>

#include <iostream>

#include "developer.hpp"

auto main() -> int
{
    std::vector<std::shared_ptr<developer>> developer_;

    //developer_.push_back(std::make_shared<senior_developer>());
    //developer.push_back(std::make_shared<junior_developer>());

    /*for(auto &itr : developer)
    {
        itr->solve_problem();
    }

    return 0;*/
}