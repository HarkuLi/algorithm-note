#include <limits>
#include <vector>
#include "max_subarray_dac.h"

void MaxSubarrayDac(
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
