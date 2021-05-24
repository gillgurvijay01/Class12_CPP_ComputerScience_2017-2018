//program to display 10 nat even by for
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"\nWrite value of n";
 cin>>n;
/* int od;
 od=n*2; //for finalizing the limit
 */
 int cnt,nat=2,s=0;
 for (cnt=1;cnt<=n;cnt++)
 {
    // cout<<nat<<endl;
     s=s+nat;
     nat=nat+2;
 }
 cout<<"\nsum of first "<<n<<" even numbers is"<<endl<<s;
 getch();
}