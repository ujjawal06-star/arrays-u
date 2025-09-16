#include <iostream>
using namespace std;
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Your array no. is :-" << arr[i]<< endl;
    }
}
int main()
{
    int arr[] = {10, 80, 60, 70, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    print(arr, len);
}