#include "gtest/gtest.h"  // include the gtest functions & macros
#include "developer.hpp"


//Test Fixture
class DeveloperTest : public ::testing::Test {
protected:

DeveloperTest() {   //Constructor
    senior_ = new SeniorDeveloper(expected_senior_name, expected_senior_alias);
    junior_ = new JuniorDeveloper(expected_junior_name, expected_junior_alias);
}

~DeveloperTest() override { //Destructor
    delete senior_;
    delete junior_;
}


SeniorDeveloper* senior_; //necessary because SeniorDeveloper has no Default Constructor
JuniorDeveloper* junior_;

const std::string expected_senior_name = "Mark";
const std::string expected_senior_alias = "MK";
const std::string expected_junior_name = "Mike";
const std::string expected_junior_alias = "M";

};

// Test for Constructor and Getter of senior and junior developer class 
TEST_F(DeveloperTest, TestInitialisation){
    EXPECT_EQ(senior_-> get_name(), expected_senior_name);
    EXPECT_EQ(senior_-> get_alias(), expected_senior_alias);
    EXPECT_EQ(junior_-> get_name(), expected_junior_name);
    EXPECT_EQ(junior_-> get_alias(), expected_junior_alias);
}




