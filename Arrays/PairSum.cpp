#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[7] = {1, 7, 2, 58, 13, 56, 43};
    sort(arr1, arr1 + 7);
    int target = 15;
    int i = 0;
    int j = 7 - 1;
    while (i != j)
    {
        int sum = arr1[i] + arr1[j];
        if (sum > target)
        {
            --j;
        }
        else if (sum < target)
        {
            ++i;
        }
        else
        {
            cout << i << " " << j << endl;
            ++i;
            --j;
        }
    }
}