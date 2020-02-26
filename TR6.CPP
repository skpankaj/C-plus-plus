/*Sunil (Nalanda,Bihar) & co......C++
/*program for parametrised constructor[tr6.cpp]*/
#include<iostream.h>
#include<conio.h>
class student
{
int roll;
int marks;
public:
student(int p,int q)
{
roll=p;
marks=q;
}
void show()
{
cout<<roll<<marks;
}
};
void main()
{
student abc(10,576);
abc.show();
}