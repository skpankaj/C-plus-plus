 
/*wap for class array of objects [tr2.cpp] */
#include<iostream.h>
#include<conio.h>
class student
{
int roll;
int marks;
public:
void getdata()
{
cout<<"enter roll &marks";
cin>>roll>>marks;
}
void putdata()
{
cout<<"\t"<<roll<<"\t"<<marks;
}
};
void main()
{
student s[5];
int i;
clrscr();
for(i=0;i<3;i++)
{
s[i].getdata();
}
for(i=0;i<3;i++)
{
s[i].putdata();
}
getch();
}