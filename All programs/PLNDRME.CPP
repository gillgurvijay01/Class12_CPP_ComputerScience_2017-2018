// This is a program to reverse the number
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 long int num,dig,rev=0;
 cout<<"\nPlease enter the number";
 cin>>num;
 int n=num;
 do
  {
   dig=num%10;
   rev=(rev*10)+dig;
   num=num/10;
  }
  while(num!=0);
  cout<<"\nthe reverse of number is ="<<rev;
  if (rev==num)
     cout<<"\nNumber is palindrome";
  else
     cout<<"\nNumber is not palindrome";
  getch();
}
