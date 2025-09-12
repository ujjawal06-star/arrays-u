#include <iostream>
using namespace std;
void smallno(int arr[], int len)
{
    int min = arr[0], smin = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Your smallest no. is :- " << min << endl
         << endl;
}
int main()
{
    int arr[] = {200, 20, 80, 30, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    smallno(arr, len);
}