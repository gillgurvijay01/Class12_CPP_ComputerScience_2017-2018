#include<iostream.h>
#include<conio.h>
void mod(int *a)
{
 for(int i=0;i<6;i++)
 {
  if(i%2==0) a[i]=a[i+1];
  else a[i]+=10;
 }
}
void display(int *a)
{
 cout<<"\nArray ={";
 for(int i=0;i<6;i++)
  cout<<a[i]<<" ";
 cout<<"}";
}


void main()
{
 int a[6];
 cout<<"\nplease enter elements in array ";
 for (int i=0;i<6;i++)
  cin>>a[i];
 clrscr();
 cout<<"\nOriginal array ";
 display(a);
 mod(a);
 cout<<"\nChanged array ";
 display(a);
 getch();
}

