#include<iostream.h>
#include<math.h>
#include<conio.h>
double facto(int num)
{
 double fact=1;
 for( int i=num;i>=1;i=i-1)
 {

  fact=fact*i;
 }
 return(fact);
}

void series(int x,int n)
{
  long double sum=1;
  long double term;
  for (int i=1;i<=n;++i)
  {
   term=(pow(x,i))/facto(i);
   sum+=term;
  }
  cout<<"\nSum of Series is      ="<<sum;
}
void main()
{
 clrscr();

 int a,b,c;
 cout<<"\nPlease value of x      :";
 cin>>a;
 cout<<"\nPlease enter value of n:";
 cin>>b;
 series(a,b);
 getch();
}

