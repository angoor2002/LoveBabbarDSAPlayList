#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0, 0, 1, 0, 1, 0, 0, 1, 0, 1};
    int left = 0;
    int right = 10 - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            ++left;
        }
        while (arr[right] == 1 && left < right)
        {
            --right;
        }
        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            ++left;
            --right;
        }
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}