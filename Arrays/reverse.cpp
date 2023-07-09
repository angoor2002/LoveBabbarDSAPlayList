#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 7, 2, 58, 13};
    int i = 0; // start
    int j = 4; // end
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}