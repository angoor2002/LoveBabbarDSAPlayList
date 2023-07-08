#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    cout << "a&b=" << (a & b) << endl;
    cout << "a|b=" << (a | b) << endl;
    cout << "~a=" << (~a) << endl;
    cout << "a^b=" << (a & b) << endl;

    // Let's Check if x>>n=x/2^n and x<<n=x*2^n
    cout << (17 >> 2) << endl; // 17/2^2=4;
    cout << (19 << 2) << endl; // 19*2^2=76
}