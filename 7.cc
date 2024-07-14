#include <bits/stdc++.h>  
using namespace std;  
int func(int num)
{
    int sum = 0;
    int m = 0;
    while(num>0||num<0)    
    {    
        m=num%10;    
        sum=sum+m;    
        num=num/10;    
        
    } 
return sum;
}
int main()  
{  
int n;
int sum=0,m;    
cout<<"Enter a number: ";    
cin>>n; 
if(n<0)
{
    n=-n;
}
sum=func(n);
cout<<"Sum of the digits is = "<<sum<<endl;    
return 0;  
}  
