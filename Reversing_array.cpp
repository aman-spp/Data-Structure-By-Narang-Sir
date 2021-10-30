#include<iostream>
using namespace std;
void reverse_array(int arr[], int n)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Before Reversing : ";
    for(int i=0;i<n;i++)
    {
        cout<<"["<<arr[i]<<"]"<<" ";
    }
    cout<<endl;
    reverse_array(arr,n);
    cout<<"After Reversing : ";
    for(int i=0;i<n;i++)
    {
        cout<<"["<<arr[i]<<"]"<<" ";
    }
    return 0;
}