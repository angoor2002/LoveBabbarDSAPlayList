#include <iostream>
using namespace std;

bool LinSearch(int *arr, int size, int elem, int totSize = 8)
{
    if (size == 0)
    {
        cout << "Not found";
        return false;
    }
    if (*arr == elem)
    {
        cout << "element present at position " << totSize - size + 1 << endl;
        return true;
    }
    bool remainder = LinSearch(arr + 1, size - 1, elem);
    return remainder;
}

int main()
{
    int arr[8] = {1, 4, 78, 3, 90, 73, 30, 32};
    int size = 8;
    int elem = 1;
    LinSearch(arr, size, elem);
    return 0;
}