#include <iostream>
using namespace std;

int getSum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return *arr;
    }
    int ans = *arr + getSum(arr + 1, size - 1);
    return ans;
}

int main()
{
    int arr[5] = {10, 2, 3};
    cout << getSum(arr, 5);
    return 0;
}