/*sarvendra......C++
/*program for pre and post decimal using friend function[tr10.cpp]*/
#include<iostream.h>
#include<conio.h>
class percent
{
int pre;
int post;
public:
void takedata(int a,int b)
{
pre=a;
post=b;
}
void showdata()
{
cout<<pre<<post;
}
friend percent sum(percent,percent)
};
percent sum(percent c1,percent c2)
{
percent temp;
temp.post=c1.post+c2.post;
temp.pre=temp.post/100;
temp.post=temp.post%100;
temp.pre=temp.pre+c1.pre+c2.pre;
return(temp);
}
void main()
{
clrscr();
percent c1,c2,c3;
c1.takedata(40,23);
c2.takedata(50,56);
c3=sum(c1,c2);
c3.showdata();
}
