#include <bits/stdc++.h >
using namespace std;
int fact(int);

int main() {
    int fact1,n;
    cout << "enter the value of n"<<endl;
     cin>>n;
     if(n<0)
     {
         cout<< " hi";
     }
    else
    {
    fact1=fact(n);
    cout<< " the factorial of " <<n<< " is = "<<fact1;
    }
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}


