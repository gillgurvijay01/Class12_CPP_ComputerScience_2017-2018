#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n1,n2;
 do
 {
  cout<<"\nPl enter first no.(0<n<50) :";
  cin>>n1;
 }
 while(n1<0||n1>50);
 do
 {
  cout<<"\nPl enter second no. (0<n<50) :";
  cin>>n2;
 }
 while (n2<0 || n2>50);
 clrscr();
 cout<<"the sum of "<<n1<<" and "<<n2<<" is ="<<n1+n2;
 getch();
}