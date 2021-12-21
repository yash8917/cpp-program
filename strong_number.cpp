#include<iostream>
using namespace std;
int main()
{
    int num,t,r,i,x=2;
    cout<<"enter number to check  whether it is strong number or not\n";
    cin>>num;
    t=num;
   int sum=0;
   
    while(num>0)
    {
        r=num%10;
        int fact=1;
      for(i=r;i>0;i--)
      {
         fact=fact*i;
      }
     sum=sum+fact;
      num=num/10;
     }
     cout<<"sum"<<sum;
     if(t==sum)
     {
         
         cout<<"strong number";
     }
     else
     cout<<"not a strong number";
     x++;
     return 0;
}
    