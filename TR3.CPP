/*Sunil (Nalanda,Bihar) & co......C++
/*sample program for static data member[tr3.cpp]*/
#include<iostream.h>
class number
{
static int a;
public:
void getdata()
{
cout<<"enter the no";
cin>>a;
a++;
}
void putdata()
{
cout<<a;
}
};
int number::a;
void main()
{
number n1;
n1.getdata();
number n2;
n2.putdata();
}