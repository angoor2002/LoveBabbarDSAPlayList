#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<int> temp;
    vector<vector<int>> res;
    map<vector<int>, int> mp;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (k > j)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum > 0)
            {
                --k;
            }
            else if (sum < 0)
            {
                ++j;
            }
            else
            {
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);
                mp[temp]++;
                if (mp[temp] == 1)
                {
                    res.push_back(temp);
                }
                temp.clear();
                --k;
                ++j;
            }
        }
    }
    vector<vector<int>> res_ac;
    return res;
}