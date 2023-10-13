#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        // cout << 0 << endl;
        return 0;
    }

    if (n == 1)
    {
        // cout << 1 << endl;
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}