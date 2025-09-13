#include <iostream>
using namespace std;
void missing(int arr[], int len)
{
    int sum = 0, s;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    s = (len * (len + 1)) / 2;
    cout << "missing no. is " << s - sum << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    missing(arr, len);
}