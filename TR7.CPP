/*Sunil (Nalanda,Bihar) & co......C++
/*program for default constructor[tr7.cpp]*/
#include<iostream.h>
#include<conio.h>
class student
{
int roll;
int marks;
public:
student()
{}
void show()
{
cout<<roll<<marks;
}};
void main()
{
clrscr();
student s;
s.show();
}
