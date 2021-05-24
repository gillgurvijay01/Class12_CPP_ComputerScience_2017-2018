#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int *A,n;
 cout<<"\nEnter number of elements...";
 cin>>n;
 A=new int[n];
 for (int s=0;s<n;s++)
  cin>>A[s];
 cout<<"\nOriginal array......"<<endl;
 cout<<"\nA={";
 for (int d=0;d<n;d++)
 {
  cout<<A[d]<<",";
  if (d==n-1)
   cout<<"\b}";
 }

 for(int j=0;j<n;j+=2)
 {
  int temp=A[j];
  A[j]=A[j+1];
  A[j+1]=temp;
 }
 cout<<"\nNew array......";
 cout<<"\nA={";
 for(int k=0;k<n;k++)
 {
  cout<<A[k]<<",";
 }
  cout<<"\b}";
 getch();
}


