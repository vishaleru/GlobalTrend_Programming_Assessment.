#include<bits/stdc++.h>
using namespace std;
int gcd1(int num1,int num2)
{
    
    if(num2 == 0)
    {
        return num1;
    }
    return gcd1(num2,num1%num2);
}
int main()
{
    int num1 = 8;
    int num2 = 12;
    int num3 = gcd1(num1,num2);
    cout<<"gcd of "<<num1 <<" and "<<num2<<" is "<<num3;
    return 0;
}

