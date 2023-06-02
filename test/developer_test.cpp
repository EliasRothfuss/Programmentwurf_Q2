#include "gtest/gtest.h"  // include the gtest functions & macros
#include "developer.hpp"

// Test for constructor of Developer class
TEST(JuniorDeveloperTest, ConstructorTest) {
    JuniorDeveloper junior_dev("Junior Name", "Junior Alias");
    ASSERT_EQ(junior_dev.get_name(), "Junior Name");
    ASSERT_EQ(junior_dev.get_alias(), "Junior Alias");
}

// Test for constructor of SeniorDeveloper class
TEST(SeniorDeveloperTest, ConstructorTest) {
    SeniorDeveloper senior_dev("Senior Name", "Senior Alias");
    ASSERT_EQ(senior_dev.get_name(), "Senior Name");
    ASSERT_EQ(senior_dev.get_alias(), "Senior Alias");
}