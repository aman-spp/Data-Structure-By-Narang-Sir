#include<iostream>
using namespace std;

void printarray(int a[], int n)
{
    // int n = sizeof(a)/sizeof(int);   ///////////  [a] ---> {1,2,3,4,5,6,7,8,9} so size of a equal size of pointer variable 8 or 4;
    // so n = either 1 or 2.  so passing n is necessary for traversing array.
    // And array always pass by reference not by value
    for(int i=0;i<n;i++)
    {
        cout<<"["<<a[i]<<"]"<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    printarray(arr,n);
    return 0;
}