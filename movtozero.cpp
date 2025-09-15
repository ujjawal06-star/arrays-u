#include <iostream>
using namespace std;
void mov0toend(int arr[], int len)
{
    int zero = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0)
        {
            arr[zero] = arr[i];
            zero++;
        }
    }
    for (int i = zero; i < len; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 0, 3, 0, 0, 5, 0, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    mov0toend(arr, len);
}