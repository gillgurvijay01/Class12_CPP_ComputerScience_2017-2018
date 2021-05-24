//program to display 10 nat no by for
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"\nWrite value of n";
 cin>>n;
 int cnt=1,nat=1,s=0;
 for (cnt=1;cnt<=n;cnt++)
 {
    // cout<<nat<<endl;
     s=s+nat;
     nat++;
 }
 cout<<"\nsum of first "<<n<<" nat numbers is"<<endl<<s;
 getch();
}