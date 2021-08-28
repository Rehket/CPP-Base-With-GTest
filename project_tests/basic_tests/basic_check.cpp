//
// Created by AK on 13/10/15.
//

#include "gtest/gtest.h"
#include "Project.h"

TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(just_checking, test_eq) {
    EXPECT_EQ(1, Project::ReturnVal(1));
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}
