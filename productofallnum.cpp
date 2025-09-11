#include <iostream>
using namespace std;
void product(int arr[], int len)
{
    int pro = 1;
    for (int i = 0; i < len; i++)
    {
        pro *= arr[i];
    }
    cout << "Your product of no. is :-" << pro << endl;
}
int main()
{
    int arr[] = {10, 80, 60, 70, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    product(arr, len);
}