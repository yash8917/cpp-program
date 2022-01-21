#include<iostream>
using namespace std;
int main()
{
	int size,i,neg=0,pos=0;
	cout<<"enter the size of array:";
	cin>>size;
	int a[size],n[100 ],x=0,p[ 100],y=0;
	cout<<"enter the elements :";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<size;i++)
	{
	 if(a[i]<0)
	 {
	 	
	 	n[x]=a[i];
	 	x++;
	 }
}
	 cout<<" total number of negative element are "<<x;
	 cout<<n[x]<<" ";
	 cout<<"\n";
	 for(i=0;i<size;i++)
	 {
	 
	  if(a[i]>0)
	 {
	 	
	 	p[y]=a[i];
	 	y++;
	 }
}
 cout<<" total number of positive  element are "<<y;
 cout<<p[y]<<" ";
	 cout<<"\n";
	 
	 
	 
     if(neg>pos)
     {
     	for(i=0;i<size;i++)
     	{
     		
     		cout<<n[x]<<" "<<p[y]<<" ";
		 }
	 }
	 
	 
	    if(pos>neg)
     {
     	for(i=0;i<size;i++)
     	{
     		cout<<p[y]<<" "<<n[x]<<" ";
		 }
	 }
	 return 0;
}
