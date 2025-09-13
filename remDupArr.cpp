#include<iostream>
using namespace std;
void removeD(int arr[], int len){
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arr[i]=arr[i+1];
            cout<<arr[i]<<" ";
        }
        
    }
}
int main(){
    int arr[]={1,1,2,2,3,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    removeD(arr, len);
}