#include <bits/stdc++.h>
using namespace std;
int maximum_difference(int array[], int arr_size)
{
    
    int i, j;
    int maxi = array[0];
    int mini = array[0];
    for (i = 0; i < arr_size; i++)
    {
        if(maxi<array[i])
        {
            maxi = array[i];
        }
        if(mini>array[i])
        {
            mini = array[i];
        }
    }
    int max_diff = maxi - mini;
    return max_diff;
}
 
int main()
{
    int array[] = {10, 15, 90, 200, 110};   
    cout<<"Given array is :";
    for(auto it:array)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    int n=maximum_difference(array, 5);
    cout<<"Maximum difference is "<<n;

    return 0;
}

