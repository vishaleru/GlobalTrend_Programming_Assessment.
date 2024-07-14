#include <bits/stdc++.h>
using namespace std;
bool check(string a)
{
    int i = 0;
    while(i<a.size())
    {
        if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z'))
        {
            
            i++;
        }
        else
        {
            
            return false;
        }
    }
    return true;
}
int main()
{
    string a;
    
    cout<<"enter the string"<<endl;
    cin>>a;
    cout<<"given string is "<<a<<endl;
    if(check(a) == 0)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
}
