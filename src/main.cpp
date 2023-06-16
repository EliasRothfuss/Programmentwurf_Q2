#include <cstdint>
#include <iostream>
#include <memory>
#include <vector>

#include "developer.hpp"

auto main() -> int
{
    std::vector<std::shared_ptr<Developer>> developer_vec;  // created vector for Developer

    developer_vec.push_back(std::make_shared<SeniorDeveloper>(
        "Ethan Sullivan", "Phoenix CodeMaster"));  // add class SeniorDeveloper to vector
    developer_vec.push_back(
        std::make_shared<JuniorDeveloper>("Ava Thompson", "Byte Wizard"));  // add class JuniorDeveloper to vector

    for (auto &itr : developer_vec)  // loop over Developer_vec elements
    {
        itr->solve_problem();  // call solve_problem method for elements in vector
    }

    return 0;
}