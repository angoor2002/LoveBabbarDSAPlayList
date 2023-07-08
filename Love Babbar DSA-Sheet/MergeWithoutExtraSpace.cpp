#include <iostream>
#include <algorithm>
using namespace std;

void merge()
{
    // code here
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};
    int n = 4;
    int m = 5;
    // code here
    int i = n - 1; // Pointer for arr1
    int j = 0;     // Pointer for arr2

    while (i >= 0 && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    merge();
    return 0;
}
