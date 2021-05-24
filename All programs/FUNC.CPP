#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void numcal(int num[], int n)
{
 float prod=1;
 float sum=0;
 int high;
 cout<<"\nPlease enter the numbers-:";
 for (int j=0;j<n;j++)
  cin>>num[j];
  high=num[0];
 for (int i=0;i<n;i++)
  {
   sum+=num[i];
   prod*=num[i];
   if (high<num[i]) high=num[i];
  }
 cout<<"\nThe product of numbers is ="<<prod;
 cout<<"\nThe sum of numbers        ="<<sum;
 cout<<"\nThe highest Number is     ="<<high;
}
void main()
{
 clrscr();
 int *a,n;
 cout<<"\nHow many numbers you want to enter ";
 cin>>n;
 numcal(a,n);
 getch();
}