#include "algos.h"
#include "gtest/gtest.h"
#include "utils.h"

TEST(UTILS, Basic) {
    auto sample = getSampleData<int>(10);
    EXPECT_EQ(sample.size(), 10);
}

TEST(ALGOS, IS_SORTED) {
    std::vector<int> data{1, 2, 3};
    EXPECT_TRUE(isSorted(data.begin(), data.end()));

    auto sample = getSampleData<uint32_t>(5000);
    std::sort(sample.begin(), sample.end());
    EXPECT_TRUE(isSorted(sample.begin(), sample.end()));

    std::sort(sample.begin(), sample.end(), std::greater<>{});
    EXPECT_TRUE(isSorted(sample.begin(), sample.end(), std::less<>{}));
}
