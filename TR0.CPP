/*Sunil (Nalanda,Bihar) & co......C++
/*program for static member function[tr0.cpp]*/
#include<iostream.h>
class number
{
int a;
static int b;
public:
void getdata()
{
a=10;
}
void putdata()
{
b++;
cout<<b;
cout<<a;
}
static void show()
{
cout<<b;
}
};
int number::b;
void main()
{
number n1;
n1.getdata();
n1.putdata();
number::show();
}
