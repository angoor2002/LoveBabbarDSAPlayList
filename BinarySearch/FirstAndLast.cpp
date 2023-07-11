#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> res = {0, 0};
    int left = 0;
    int right = nums.size() - 1;
    int mid = (left + right) / 2;
    res = {-1, -1};
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
        else
        {
            left = mid;
            right = mid;
            while (left != 0 && nums[left - 1] == target)
            {
                left--;
            }
            while (right != nums.size() - 1 && nums[right + 1] == target)
            {
                right++;
            }
            cout << left << " " << right << endl;
            res[0] = left;
            res[1] = right;
            return res;
            break;
        }
    }
    return res;
}
int main()
{
}