#include <iostream>
using namespace std;

int ClimbingStairs(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    int ans = ClimbingStairs(n - 1) + ClimbingStairs(n - 2);
    return ans;
}
int main()
{
    cout << ClimbingStairs(3) << endl;
    return 0;
}
