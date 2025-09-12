#include <iostream>
using namespace std;
void revarr(int arr[], int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 60, 40, 25, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    revarr(arr, len);
}