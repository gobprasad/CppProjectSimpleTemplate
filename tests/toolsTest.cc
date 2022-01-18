#include "gtest/gtest.h"
#include "utils.h"

TEST(UTILS, Basic) {
    auto sample = getSampleData<int>(10);
    printThis(sample);
    EXPECT_EQ(sample.size(), 10);
}
