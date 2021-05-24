#include<iostream.h>
#include<conio.h>
int** read()
{
 int **a;
 a=new int *[3];
 cout<<"\nPlease enter values of  matrix..";
 for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  cin>>a[i][j];
 return(a);
}
int** matadd(int **a,int **b)
{
 int **c;
 c=new int *[3];
 for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  c[i][j]=a[i][j]+b[i][j];
 return(c);
}

void disp(int **a)
{
 for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
     cout<<a[i][j]<<" ";
    cout<<endl;
   }
}



void main()
{
 clrscr();
 int **a,**b,**c;
 a=new int *[3];
 b=new int *[3];
 c=new int *[3];
 a=read();
 b=read();
 cout<<"\nThe First matrix is as follows \n";
 disp(a);
 cout<<"\nSecond matrix is as follows\n";
 disp(b);
 c=matadd(a,b);
 cout<<"\nThe sum of above two matrices \n";
 disp(c);
 getch();
}





