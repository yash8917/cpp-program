#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int amount,note1,note2,note3,note4,note5,note6,note7,note8,note9;
    cout<<"enter the amount\n ";
    cin>>amount;
     
    if(amount>=2000)
    {
    note1=amount/2000;
    amount= amount-(note1*2000);
    }
    cout<<" 2000="<<note1<<"\t"<<"left amount"<<amount<<"\n";
   
    if(amount>=500)
    {
    note2=amount/500;
    amount= amount-(note2*500);
    }
     cout<<" 500="<<note2<<"\t"<<"left amount"<<amount<<"\n";
    
    if(amount>=200)
    {
    note3=amount/200;
       amount= amount-(note3*200);
    }
     cout<<" 200="<<note3<<"\t"<<"left amount"<<amount<<"\n";
    
    if(amount>=100)
    {
    note4=amount/100;
       amount= amount-(note4*100);
    }
     cout<<" 100="<<note4<<"\t"<<"left amount"<<amount<<"\n";
   
    if(amount>=50)
    {
    note5=amount/50;
   amount= amount-(note5*50);
    }
     cout<<" 50="<<note5<<"\t"<<"left amount"<<amount<<"\n";
      
     if(amount>=20)
    {
    note6=amount/20;
      amount= amount-(note6*20);
   
    }
     cout<<" 20="<<note6<<"\t"<<"left amount"<<amount<<"\n";
      
if(amount>=10)
    {
    note7=amount/10;
     amount= amount-(note7*10);
   
    }
     cout<<" 10=\n"<<note7<<"\t"<<"left amount"<<amount<<"\n";
      
     if(amount>=5)
    {
    note8=amount/5;
       amount= amount-(note8*5);
 
    }
     cout<<" 5="<<note8<<"\t"<<"left amount"<<amount<<"\n";
      
      if(amount>=2)
    {
    note9=amount/2;
   amount= amount-(note9*2);
 
    }
     cout<<" 2="<<note9<<"\t"<<"left amount"<<amount<<"\n";
      
     /* if(amount>=1)
    {
   
 cout<<" 1="<<note<<"\n";
    }*/
    return 0;
}