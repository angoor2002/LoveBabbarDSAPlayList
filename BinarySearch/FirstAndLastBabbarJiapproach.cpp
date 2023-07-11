#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int mid = (left + right) / 2;
    int ans = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        // cout << mid << endl;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] == target)
        {
            // first occurence
            ans = mid;
            // cout << ans << endl;
            right = mid - 1;
        }
    }
    return ans;
}
int lastOccurence(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int mid = (left + right) / 2;
    int ans = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        // cout << mid << endl;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] == target)
        {
            // last occurence
            ans = mid;
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    pair<int, int> p;
    vector<int> arr = {0, 0, 1, 1, 1, 1, 4, 4, 4, 5, 78, 79, 79, 79, 79, 79, 79, 79, 79, 90, 134};
    int target = 79;
    p.first = firstOccurence(arr, target);
    p.second = lastOccurence(arr, target);
    cout << p.first << p.second << endl;
    return 0;
}
// Refer to Notes for more details