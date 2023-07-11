#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 4, 5, 3};
    int left = 0;
    int right = arr.size() - 1;
    int mid = (left + right) / 2;
    while (right >= left)
    {
        mid = (left + right) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            break;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            left = mid;
        }
        else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            right = mid;
        }
    }
    cout << mid << endl;
    return 0;
}