#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[7] = {1, 7, 2, 58, 13, 56, 43};
    int arr2[7] = {1, 7, 2, 58, 13, 56, 69};
    int n = 7;
    int m = 7;
    int i, j = 0;
    vector<int> temp;
    while (i < 7 && j < 7)
    {
        if (arr1[i] < arr2[j])
        {
            ++i;
        }
        else if (arr1[i] == arr2[j])
        {
            temp.push_back(arr1[i]);
            ++i;
            ++j;
        }
        else if (arr1[i] > arr2[j])
        {
            ++j;
        }
    }
    for (int i : temp)
    {
        cout << i << " ";
    }
}