/*Sunil (Nalanda,Bihar) & co......C++
/* program for matrix representation using class[sel1.cpp]*/
#include<iostream.h>
#include<conio.h>
class as
{
public:
     int a[3][3],i,j;
public:
  void input()
	{
cout<<"enter matrix";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
	 }
	 }
	 }
void show()
     {
     for(i=0;i<3;i++)
	 {
	  cout<<"\n";
	 for(j=0;j<3;j++)
	   {
	    cout<<"\t"<<a[i][j];
	   }
       }
      }
};
void  main()
{
clrscr();
as a;
a.input();
a.show();
getch();
}