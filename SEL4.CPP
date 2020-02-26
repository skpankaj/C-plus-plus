/*Sunil (Nalanda,Bihar) & co......C++
/*comparision for two string using call by reference[sel4.cpp]*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
 char *max(char *p,char *q)
  {
    if(strcpy(p,q)>0)
     return p;
     else
      return q;
  }
  void main()
   {
    char *x,*y;
    cout<<"Enter two string :";
    cin>>x>>y;
    cout<<"Maximum :"<<max(x,y)<<endl;
    getch();
   }