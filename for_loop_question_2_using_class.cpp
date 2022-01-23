/*  wap to find the number of vowels,digits,consonants and white spaces in a string */

#include<iostream>
using namespace std;

class find_
{
    char name[50],i,vowel=0,number=0,consonants=0,space=0;
   public:
  // char name[50],i,vowel=0,number=0,consonants=0,space=0;
    void input()
   {
       cout<<"enter any sentence of your own ";
       gets(name);
     for(i=0;i!='\0';i++)
     {
       if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'||
            name[i]=='A'||name[i]=='E' ||name[i]=='I' ||name[i]=='O'||name[i]=='U' )
       {
           ++vowel;
       }
        if(name[i]>='0' && name[i]<='9')
        {
            ++number;
        }
         if((name[i]>='a' && name[i]<='z')|| (name[i]>='a' && name[i]<='z'))
        {
            ++consonants; 
        }
        else
        {
            ++space;
        }
     }
    cout<<"vowel in the sentence is= "<<vowel<<"\n";
    cout<<"consonants in the sentence is="<<consonants<<"\n";
    cout<<"space in the sentence is ="<<space<<"\n";
    cout<<"numbers in the string is ="<<number<<"\n";
   }
};

int main()
{
     find_ ob;
      ob.input();
  return 0; 
}