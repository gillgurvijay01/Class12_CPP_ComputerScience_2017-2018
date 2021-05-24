#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int n,product=1,nat=1,cnt=1;
L1: cout<<"\nPlease enter value of n";
    cin>>n;
    if (n<0)
 {
    cout<<"\nSORRY N SHOULD BE +VE";
    GOTO L1;
    }
   for (cnt;cnt<=n;cnt++)
 {
   product=product*nat;
   nat=nat+2;
  }
  cout<<"\nproduct of n odd no is==="<<product;
  getch();
  }