#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int nat=2 , cnt=1,n;
 cout<<"\nPlease enter value on n . . . . . . . . ";
 cin>>n;
 while (cnt<=n)
 {
   cout<<nat<<endl;
   nat=nat+2;
   cnt++;
  }
  getch();
}