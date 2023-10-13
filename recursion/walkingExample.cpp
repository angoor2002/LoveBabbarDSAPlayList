#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "source: " << src << " destination :" << dest << endl;
    if (src == dest)
    {
        cout << "Pahuch gya" << endl;
        return;
    }
    // src++;
    reachHome(src + 1, dest);
}
int main()
{
    int dest = 100;
    int src = 1;
    reachHome(src, dest);
    return 0;
}