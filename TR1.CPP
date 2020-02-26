/*Sunil (Nalanda,Bihar) & co......C++
/*write a program for passing object in a function[tr1.cpp]*/
#include<iostream.h>
#include<conio.h>
class complex
{
int real;
int image;
public:
void getdata()
{
cout<<"enter real & image";
cin>>real>>image;
}
void showdata()
{
cout<<real<<image;
}
void sum(complex,complex);
};
void complex::sum(complex c1,complex c2)
{
real=c1.real+c2.real;
image=c1.image+c2.image;
}
void main()
{
clrscr();
complex x;
x.getdata();
complex y;
y.getdata();
complex z;
z.sum(x,y);
z.showdata();
getch();
}
