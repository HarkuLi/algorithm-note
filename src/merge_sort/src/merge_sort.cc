#include <limits>
#include <vector>
#include "merge_sort.h"

void MergeSort(
  std::vector<int>* input,
  std::size_t start,
  std::size_t end
) {
  if (start >= end) {
    return;
  }

  std::size_t middle = (int) ((end + start)/2);
  MergeSort(input, start, middle);
  MergeSort(input, middle + 1, end);
  Merge(input, start, middle, end);
}

void Merge(
  std::vector<int>* input,
  std::size_t start,
  std::size_t middle,
  std::size_t end
) {
  std::vector<int> left(input->begin() + start, input->begin() + middle + 1);
  std::vector<int> right(input->begin() + middle + 1, input->begin() + end + 1);
  left.push_back(std::numeric_limits<int>::max());
  right.push_back(std::numeric_limits<int>::max());

  auto leftIt = left.begin();
  auto rightIt = right.begin();
  for (int i = start; i <= end; ++i) {
    if (*rightIt >= *leftIt) {
      (*input)[i] = *leftIt;
      ++leftIt;
    } else {
      (*input)[i] = *rightIt;
      ++rightIt;
    }
  }
}
