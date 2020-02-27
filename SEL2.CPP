/Sarvendra kumar Pankaj......C++
/*wap for transpose of matrix narmally*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,r,c;
 int mat[10][10],trans[10][10];
clrscr();
cout<<"\n Enter the row no:";
cin>>r;
cout<<"\n Enter the column no:";
cin>>c;
cout<<"\n Enter data for matrix-->\n";
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	cin>>mat[i][j];
	}

}
cout<<"\n original matrix represented as:\n";
 for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	cout<<"\t"<<mat[i][j];
	}
	cout<<"\n";
}
cout<<"\n transpose matrix represented as:\n";
 for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
	trans[i][j]=mat[j][i];
	cout<<"\t"<<trans[i][j];
	}
	cout<<"\n";
}
getch();
}
