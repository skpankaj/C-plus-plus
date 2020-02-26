/*Sunil (Nalanda,Bihar) & co......C++
/* addition of two complex number using friend fuction[tr9.cpp]*/
#include<iostream.h>
#include<conio.h>
class complex
{
float real;
float image;
public:
void getdata(float a,float b)
{
real=a;
image=b;
}
void putdata()
{
cout<<real<<image;
}
friend complex sum(complex,complex)
};
complex sum(complex c1,complex c2)
{
complex temp;
temp.real=c1.real+c2.real;
temp.image=c1.image+c2.image;
return(temp);
}
void main()
{
clrscr();
complex c1,c2,c3;
c1.getdata(4.21,5.57);
c2.getdata(3.17,6.32);
c3=sum(c1,c2);
c3.putdata();
}