#include <iostream>
using namespace std;
void intersect(int arr[], int len, int arr1[], int len1)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len1; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[] = {2, 4, 6, 9, 5, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    intersect(arr, len, arr1, len1);
}