#include <vector>

typedef int *int_ptr;

int function()
{
    int arr[] = {1, 2, 3};
    for (int i=0; i<3; ++i) {
        arr[i]++;
    }

    std::vector<std::pair<int, int>> w;
    w.push_back(std::pair<int, int>(21, 37));

    return 0;
}
