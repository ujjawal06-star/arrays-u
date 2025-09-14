#include <iostream>
using namespace std;
void findD(int arr[], int len)
{
    int i;
    for (i = 0; i < len - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "the repeated element is " << arr[i] << endl;
        }
    }
}
int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    findD(arr, len);
}