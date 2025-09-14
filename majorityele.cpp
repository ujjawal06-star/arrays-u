#include <iostream>
using namespace std;
void majority(int arr[], int len)
{
    int count = 0;
    int candidate = -1;
    for (int i = 0; i < len; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count > len / 2) {
        cout << candidate << " ";
    } else {
        cout << "No majority element found";
    }
}
int main()
{
    int arr[] = {1, 1, 1, 2, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    majority(arr, len);
}