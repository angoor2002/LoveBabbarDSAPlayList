#include <iostream>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    int n = nums.size();
    vector<int> freq(n, 0);
    for (int i = 0; i < n; i++)
    {
        freq[nums[i] - 1]++;
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            res.push_back(i + 1);
        }
    }
    return res;
}