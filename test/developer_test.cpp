#include "developer.hpp"

#include "gtest/gtest.h"  // include the gtest functions & macros

// Test Fixture
class DeveloperTest : public ::testing::Test
{
   protected:
    DeveloperTest()
    {  // Constructor
        senior_ = new SeniorDeveloper(expected_senior_name_, expected_senior_alias_);
        junior_ = new JuniorDeveloper(expected_junior_name_, expected_junior_alias_);
    }

    ~DeveloperTest() override
    {  // Destructor
        delete senior_;
        delete junior_;
    }

    SeniorDeveloper* senior_;  // necessary because SeniorDeveloper has no Default Constructor
    JuniorDeveloper* junior_;

    const std::string expected_senior_name_ = "Mark";
    const std::string expected_senior_alias_ = "MK";
    const std::string expected_junior_name_ = "Mike";
    const std::string expected_junior_alias_ = "M";
};

// Test for Constructor and Getter of senior and junior developer class
TEST_F(DeveloperTest, TestInitialisation)
{
    EXPECT_EQ(senior_->get_name(), expected_senior_name_);
    EXPECT_EQ(senior_->get_alias(), expected_senior_alias_);
    EXPECT_EQ(junior_->get_name(), expected_junior_name_);
    EXPECT_EQ(junior_->get_alias(), expected_junior_alias_);
}
