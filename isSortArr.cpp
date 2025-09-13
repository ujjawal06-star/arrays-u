#include <iostream>
using namespace std;
bool sort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {10, 20, 30, 50, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    if (sort(arr, len))
        cout << "Yes\n";
    else
        cout << "No\n";
}