// This is program for switch....
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void main()
{
  clrscr();
  int a,b,ch;
l:cout<<"\nPlease enter two numbers";
 cout<<"\nNote first number should be greater than next";
 cin>>a>>b;
 if (a<b)
  {
   cout<<"\nSorry Numbers not acceptable";
   getch();
   clrscr();
   goto l;
  }

  if (a==0)
  {
   cout<<"\nSorry Numbers not acceptable";
   getch();
   clrscr();
   goto l;
  }
  if (b==0)
  {
   cout<<"\nSorry Numbers not acceptable";
   getch();
   clrscr();
   goto l;
  }
  cout<<"\na="<<a<<" and b="<<b;
  cout<<"\n1.a+b	           2.a-b		3.a*b		4=a/b";
  cout<<"\n5.a^b                   6.b^a";
  cin>>ch;
  switch (ch)
  {
   case 1 : int s;
	    s=a+b;
	    cout<<"\nThe sum of "<<a<<" and "<<b<< " is "<<s<<endl;
	    getch();
	    break;
   case 2 : int d;
	    d=a-b;
	    cout<<"\nThe dif of "<<a<<" and "<<b<< " is "<<d<<endl;
	    getch();
	    break;
   case 3 : int m;
	    m=a*b;
	    cout<<"\nThe Product of "<<a<<" and "<<b<<" is "<<m<<endl;
	    getch();
	    break;
   case 4 : float i;
	    i=(float)a/b;
	    cout<<"\n"<<a<<" divided by "<<b<<" is ====="<<setprecision(2)<<i<<endl;
	    getch();
	    break;
   case 5 : int po;
	    po=pow(a,b);
	    cout<<"\n"<<a<<" power "<<b<<" is "<<po<<endl;
	    getch();
	    break;
   case 6 : int p1;
	    p1=pow(b,a);
	    cout<<"\n"<<b<<" power "<<a<<" is "<<p1<<endl;
	    getch();
	    break;
   default: cout<<"Sorry not acceptable"<<endl;
	    goto l;

	    break;
 }
 getch();
 }