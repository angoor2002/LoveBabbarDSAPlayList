#include <iostream>
using namespace std;
int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            ++count;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    cout << hammingWeight(0b00000000000000000000000000001011) << endl;
    return 0;
}