/*Sunil (Nalanda,Bihar) & co......C++
/*passing object in a function[tr8.cpp]*/
#include<iostream.h>
#include<conio.h>
class rupee
{
int rs;
int ps;
public:
void getrupee()
{
cout<<"enter ruppe &paise";
cin>>rs>>ps;
}
void putrupee()
{
cout<<rs<<endl<<ps<<endl;
}
void sum(rupee,rupee);
};
void rupee::sum(rupee r1,rupee r2)
{
ps=r1.ps+r2.ps;
rs=ps/100;
ps=ps%100;
rs=rs+r1.rs+r2.rs;
}
void main()
{
clrscr();
rupee r1;
r1.getrupee();
rupee r2;
r2.getrupee();
rupee r3;
r3.sum(r1,r2);
r3.putrupee();
}