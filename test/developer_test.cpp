#include "gtest/gtest.h"  // include the gtest functions & macros
#include "developer.hpp"

#define test_name Kaffeemaschiene;

TEST(DeveloperTest, ConstructorTest) {
    JuniorDeveloper dev("FFF", "DDD");
    ASSERT_EQ(dev.get_name(), "FFF");
    ASSERT_EQ(dev.get_alias(), "DDD");
}


TEST(SeniorTest, ConstructorTest) {
    SeniorDeveloper dev("test_name", "test_name");
    ASSERT_EQ(dev.get_name(), "test_name");
    ASSERT_STREQ(dev.get_alias().c_str(), "test_name"); //to do, STREQ or EQ Funktion, decide whats better
}