//This is program to calculate sum & number of  digits of num.
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   clrscr();
   char q;
   do
   {
   int r,cnt=0,s=0,n;
   clrscr();
l1:cout<<"\nPlease enter a no...........................";
   cin>>n;
   if(n==0)
   {
   cout<<"\nSotty number not acceptable...............";
   goto l1;
   }
   else
   {
  while(n!=0)
  {
   r=n%10;
  // d=n/10;
   s=s+r;
   n=n/10;
   cnt++;
 }
 cout<<"\nNo of digits by counting is *** :"<<cnt;
 cout<<"\nSum of "<<cnt<<" digits is  ********* :"<<s;
 cout<<"\nIf you want tp do this program again press y if not press n**:";
 cin>>q;
 }
 }
 while (q=='Y' || q=='y');
 if(q=='n' || q=='N')
  exit;
 }


