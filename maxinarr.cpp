#include <iostream>
using namespace std;
void largeno(int arr[], int len)
{
    int max = arr[0], smax = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Your largest no. is :-" << max << endl;
}
int main()
{
    int arr[] = {10, 80, 60, 70, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    largeno(arr, len);
}