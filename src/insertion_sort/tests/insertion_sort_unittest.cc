#include "insertion_sort.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>

namespace {
TEST(InsertionSortTest, Basic) {
  std::vector<int> input = {5, 2, 4, 6, 1, 3};
  InsertionSort(&input);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}

TEST(InsertionSortTest, EmptyVector) {
  std::vector<int> input;
  InsertionSort(&input);
  EXPECT_THAT(input, testing::IsEmpty());
}

TEST(InsertionSortTest, AlreadySorted) {
  std::vector<int> input = {1, 2, 3, 4, 5, 6};
  InsertionSort(&input);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}

TEST(InsertionSortTest, WorstCase) {
  std::vector<int> input = {6, 5, 4, 3, 2, 1};
  InsertionSort(&input);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}
}
