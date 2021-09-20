#include <vector>

void InsertionSort(std::vector<int>* input)
{
    for (int i = 1; i < input->size(); ++i) {
        int value = (*input)[i];
        int j = i-1;
        while (j >= 0 && (*input)[j] > value) {
            (*input)[j+1] = (*input)[j];
            --j;
        }
        (*input)[j+1] = value;
    }
}
