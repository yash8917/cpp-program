/* insert an element in a array   at the end of array */

#include<iostream>
using namespace std;
int main()
{
   
    int  size,item,i;
    cout<<"enter the size of array";
    cin>>size;
    int a[size];
    cout<<"enter the element of array";
    for( i=0;i<size-1;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be inserted= ";
    cin>>item;
    a[size]=item;
    cout<<"new array :-\n";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}
