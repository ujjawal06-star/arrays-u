#include <iostream>
using namespace std;
void unionoftwo(int arr[], int len, int arr1[], int len1)
{
    int temp[len + len1];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        temp[index++] = arr[i];
    }
    for (int j = 0; j < len1; j++)
    {
        temp[index++] = arr1[j];
    }
    for (int k = 0; k < index; k++)
    {
        bool duplicate = false;
        for (int i = 0; i < k; i++)
        {
            if (temp[k] == temp[i])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            cout << temp[k] << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[] = {2, 4, 6, 9, 5, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    unionoftwo(arr, len, arr1, len1);
}