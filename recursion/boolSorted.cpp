#include <iostream>
#include <vector>
using namespace std;
bool isSorted(int *arr, int size)
{
    // Base Case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[] = {2, 4, 45, 9, 11, 13};
    if (isSorted(arr, 6))
    {
        cout << "It is sorted" << endl;
    }
    else
    {
        cout << "It is not sorted" << endl;
    }
    return 0;
}