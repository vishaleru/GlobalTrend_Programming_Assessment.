#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int arr_size, int k)
{
    reverse(arr,arr+k);  
    reverse(arr+k+1,arr+arr_size);
    reverse(arr,arr+arr_size);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    cout<<"Original array: ";
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    rotate(arr,n,k);
    cout<<"Update array after rotating right side by k times: ";
     for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
