#include<iostream.h>
#include<conio.h>
void transpore(int a[3][3])
{
 int b[3][3];
 for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
   b[i][j]=a[j][i];
   cout<<"\nThe matrix ix ";
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    {
     cout<<b[i][j]<<"    ";
    }
    getch();
}
void main()
{
 int b[3][3];
  cout<<"\nOriginal Matrix";
 for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
     cin>>b[i][j];
 transpore(b);
 getch();
}

