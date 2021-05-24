//program TO find FACTORS **********^^^^^^^^^^^^*******
#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int n;
 cout<<"\nPlease enter the value of N";
 cin>>n;
 cout<<"\nAll factors of "<<n<<" are -: "<<endl;
 for (int div=1;div<=n;++div)
 {
  if (n%div==0)
  cout<<div<<endl;
 }
 getch();
 }