#include "gtest/gtest.h"  // include the gtest functions & macros
#include "developer.hpp"


//Test Fixture
class DeveloperTest : public ::testing::Test {

};


// Test for Constructor and Getter of senior developer class 
TEST(DeveloperTest, SeniorDeveloperConstructorAndGetters) {
    std::string expected_name = "Mark";
    std::string expected_alias = "MK";

    SeniorDeveloper senior_developer(expected_name, expected_alias);

    EXPECT_EQ(senior_developer.get_name(), expected_name);
    EXPECT_EQ(senior_developer.get_alias(), expected_alias);
}

// Test for Constructor and Getter of junior developer class
TEST(DeveloperTest, JuniorDeveloperConstructorAndGetters) {
    std::string expected_name = "Mike";
    std::string expected_alias = "M";

    JuniorDeveloper junior_developer(expected_name, expected_alias);

    EXPECT_EQ(junior_developer.get_name(), expected_name);
    EXPECT_EQ(junior_developer.get_alias(), expected_alias);
}