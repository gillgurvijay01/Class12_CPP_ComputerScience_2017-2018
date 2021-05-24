#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr():
 int *a,n;
 do
 {
  cout<<"\nEnter no. elements in array....";
  cin>>n;
 }
 a=new int[n];
 while(n%2!=0);
 for (int i=0;j<n;i++)
 {
  cin>>a[i];
 }
 clrscr();
 cout<<"\nOriginal array....."<<endl;
 cout<<"\nA={";
 for (int j=0;j<n;j++)
 {
  cout<<a[j];
  while(j!=n-1)
   cout<<",";
 }
 cout<<"}";
 getch();
}