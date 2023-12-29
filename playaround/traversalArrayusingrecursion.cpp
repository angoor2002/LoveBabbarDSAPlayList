#include <iostream>
using namespace std;
void traversal(int *arr, int index, int len)
{
    if (index >= len)
    {
        // cout<<arr[index]<<" ";
        return;
    }
    cout << arr[index] << " ";
    traversal(arr, index + 1, len);
}
int main()
{
    int arr[6] = {1, 2, 45, 89, 3, 89};
    traversal(arr, 0, 6);
    return 0;
}