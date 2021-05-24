#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int *A,*O;
 int n;
 cout<<"\nPlease enter number of elements you want to enter";
 cin>>n;
 A=new int[n];
 O=new int[n];
 int z=n-1;
 for(int a=0;a<=z;a+=1)
 {
  cin>>A[a];
  int x=A[a],dig,rev=0;
  while(x!=0)
  {
   dig=x%10;
   rev=(rev*10)+dig;
   x/=10;
  }
  O[a]=rev;
 }
 for (int e=0;e<=z;e+=1)
 {
  cout<<"\n"<<A[e]<<" 's reverse is =="<<O[e]<<endl;

  }
  getch();
}
