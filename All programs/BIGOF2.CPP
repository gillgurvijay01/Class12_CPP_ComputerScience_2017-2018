// prog. to find & DISPLAY THE BIGGER OUT OF TWO NOBS.

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int n1,n2;
 cout<<"\npl enter the numbers ";
/*
 cin>>n1;
 cin>>n2;
*/
  cin>>n1>>n2;//cascading of i/p operators
//  if(n1>n2) cout<<"n1 is bigger";
  if(n1>n2) cout<<n1<<" is bigger then "<<n2;

  if(n2>n1) cout<<n2<<" is bigger then "<<n1;

  getch ();

}