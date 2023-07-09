#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 7, 2, 58, 13, 56, 43};
    for (int i = 0; i < 7; i += 2)
    {
        if (i + 1 < 7)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}