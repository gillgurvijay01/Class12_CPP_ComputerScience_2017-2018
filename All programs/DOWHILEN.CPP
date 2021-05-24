#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int cnt=1,nat=1,n;
 cout<<"\nPlease enter value on n";
 cin>>n;
 do
 {
  cout<<nat<<endl;
  nat=nat+2;
  cnt++;
 }
 while(cnt<=n);
 getch();
}