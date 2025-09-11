#include <iostream>
using namespace std;
void sum(int arr[], int len)
{
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        res += arr[i];
    }
    cout << "Your sum of no. is :-" << res << endl;
}
int main()
{
    int arr[] = {10, 80, 60, 70, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    sum(arr, len);
}