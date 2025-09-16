#include <iostream>
using namespace std;
void secondsmallno(int arr[], int len)
{
    int min = arr[0], smin = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != min && arr[i] < smin)
        {
            smin = arr[i];
        }
    }
    cout << "Your second small no. is :- " << smin << endl
         << endl;
}
int main()
{
    int arr[] = {200, 20, 80, 30, 80, 90, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    secondsmallno(arr, len);
}