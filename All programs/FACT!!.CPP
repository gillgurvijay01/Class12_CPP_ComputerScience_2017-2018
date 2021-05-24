#include<iostream.h>
#include<conio.h>
void facto(int num)
{
 double fact=1;
 for( int i=num;i>=1;i=i-1)
 {

  fact=fact*i;
 }
 cout<<"\nThe factorial of "<<num<<" is "<<fact;
  }
void main()
{
 clrscr();

 int n;
 cout<<"\nPlease enter no.";
 cin>>n;
 facto(n);
 getch();
}

