#include <iostream>
#include <algorithm>
using namespace std;
void appearonce(int arr[], int len)
{
    sort(arr, arr + len);
    for (int i = 0; i < len; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    appearonce(arr, len);
}