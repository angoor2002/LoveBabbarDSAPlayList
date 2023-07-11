#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 3};
    int left = 0;
    int right = arr.size() - 1;
    int mid = (left + right) / 2;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    cout << left << endl;
    return 0;
}

// why not with arr[mid-1] figure it out