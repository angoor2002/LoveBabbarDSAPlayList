#include <iostream>
using namespace std;
// initialization
int main()
{
    int a[10];
    fill_n(a, 10, -1);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}