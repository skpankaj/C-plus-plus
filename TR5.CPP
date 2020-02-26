/*Sunil (Nalanda,Bihar) & co......C++
/*program for default constructor[tr5.cpp]*/
#include<iostream.h>
#include<conio.h>
class student
{
int roll;
int marks;
public:
student()
{
roll=0;
marks=0;
}
void show()
{
cout<<roll<<marks;
}
};
void main()
{
clrscr();
student a,b,c;
a,b,c.show();
getch();
}