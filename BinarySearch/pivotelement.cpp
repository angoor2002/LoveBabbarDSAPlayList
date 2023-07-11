#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    vector<int> aux;
    int sum = 0;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        aux.push_back(sum);
        sum += nums[i];
    }
    reverse(aux.begin(), aux.end());
    sum = 0;
    // for(int i=0;i<aux.size();i++)
    // {
    //     cout<<aux[i]<<" ";
    // }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << sum << " ";
        if (sum == aux[i])
        {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}
int main()
{
}