#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 6};
    // int sum = 0;
    int length = 7;
    // for (int i = 0; i < 7; i++)
    // {
    //     sum += arr[i];
    // }
    // int minus = (length - 1) * (length) / 2;
    // int res = sum - minus;
    // cout << res << endl;
    int res = 0;
    for (int i = 0; i < length; i++)
    {
        res = res ^ arr[i];
    }
    for (int i = 1; i < length; i++)
    {
        res = res ^ i;
    }
    cout << res << endl;
}