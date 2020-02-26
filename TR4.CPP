/*Sunil (Nalanda,Bihar) & co......C++
/*program for passing object in a function[tr4.cpp] */
#include<iostream.h>
class time
{
int hr;
int min;
public:
void gettime()
{
cout<<"enter hout & minute";
cin>>hr>>min;
}
void puttime()
{
cout<<hr<<min;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
min=t1.min+t2.min;
hr=min/60;
min=min%60;
hr=hr+t1.hr+t2.hr;
}
void main()
{
time t1;
t1.gettime();
time t2;
t2.gettime();
time t3;
t3.sum(t1,t2);
t3.puttime();
}
