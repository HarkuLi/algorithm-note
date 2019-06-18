#include "merge_sort.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>

namespace {
TEST(MergeSortTest, EvenElements) {
  std::vector<int> input = {5, 2, 4, 6, 1, 3};
  MergeSort(&input, 0, input.size() - 1);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}

TEST(MergeSortTest, OddElements) {
  std::vector<int> input = {5, 2, 4, 6, 1, 3, 7};
  MergeSort(&input, 0, input.size() - 1);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6, 7}));
}

TEST(MergeSortTest, EmptyVector) {
  std::vector<int> input;
  MergeSort(&input, 0, 0);
  EXPECT_THAT(input, testing::IsEmpty());
}

TEST(MergeSortTest, AlreadySorted) {
  std::vector<int> input = {1, 2, 3, 4, 5, 6};
  MergeSort(&input, 0, input.size() - 1);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}

TEST(MergeSortTest, WorstCase) {
  std::vector<int> input = {6, 5, 4, 3, 2, 1};
  MergeSort(&input, 0, input.size() - 1);
  EXPECT_THAT(input, testing::ElementsAreArray({1, 2, 3, 4, 5, 6}));
}
}
