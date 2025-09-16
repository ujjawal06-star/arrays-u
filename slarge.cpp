#include <iostream>
using namespace std;
void secondlargeno(int arr[], int len)
{
    int max = arr[0], smax = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    cout << "Your second large no. is :-" << smax << endl;
}
int main()
{
    int arr[] = {10, 80, 60, 70, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    secondlargeno(arr, len);
}