#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int res = 0;
    for (int i = 0; i < 7; i++)
    {
        res = res ^ arr[i];
    }
    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    cout << res << endl;
}