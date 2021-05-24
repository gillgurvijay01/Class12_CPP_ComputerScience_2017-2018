#include<iostream.h>
#include<conio.h>

void natnumsum(int n)
{
 double sum=0;
 for (int i=1;i<=n;i++)
  sum+=i;
 cout<<"\nSum of First "<<n<<" numbers is =="<<sum;
}
void main()
{
 clrscr();
 int a;
 cout<<"Please enter Value of N.....";
 cin>>a;
 natnumsum(a);
 getch();
}

