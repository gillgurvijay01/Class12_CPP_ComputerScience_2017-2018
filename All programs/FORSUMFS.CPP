//program to display 10 nat no by for
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();

 int cnt=1,nat=1,s=0;
 for (cnt=1;cnt<=10;cnt++)
 {
    // cout<<nat<<endl;
     s=s+nat;
     nat++;
 }
 cout<<"\nsum of first ten nat numbers is"<<endl<<s;
 getch();
}