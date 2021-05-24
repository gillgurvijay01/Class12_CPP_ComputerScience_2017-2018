#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
 clrscr();
 int *A,n,avg,sum=0;
 long double prod=1;
 cout<<"\nPlease enter number of elements you waqnt to enter :";
 cin>>n;
 A=new int[n];
 int l=n-1;
 for (int i=0;i<=l;i++)
 {
  cout<<"\nPlease enter element :";
  cin>>A[i];
  sum=sum+A[i];
  prod=prod*A[i];
 }
 cout<<"\n\n\nSum of "<<n<<" elements ="<<sum;
 cout<<"\nProduct of "<<n<<" elements ="<<prod;
 cout<<"\nAverage of "<<n<<" elements ="<<setprecision(2)<<(float)sum/n;
 getch();
}