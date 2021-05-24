#include<iostream.h>
#include<conio.h>


int SUMMIDCOL(int **MATRIX,int M,int N)
{
 int sum=0;
 int mid=N/2;
 for(int i=0;i<M;i++)//loop for row
  sum+=MATRIX[i][mid];
 return(sum);
}


void disp(int **MATRIX ,int M,int N)
{
 for(int i=0;i<M;i++)
  {
   for(int j=0;j<N;j++)
   cout<<MATRIX[i][j]<<" ";
   cout<<endl;
  }
}


void main()
{
 clrscr();
 int **MATRIX , M, N;
 do
 {
  cout<<"\nPlease enter number of rows which must be a odd no -:";
  cin>>M;
 }while(M%2==0);
 do
 {
  cout<<"\nPlease enter number of columns which must be a odd no -:";
  cin>>N;
 }while(N%2==0);
 MATRIX= new int *[N];
 cout<<"\nPlease enter elements in the martice ";

 for(int i=0;i<M;i++)
  for (int j=0;j<N;j++)
   cin>>MATRIX[i][j];
 cout<<endl<<endl;
 disp(MATRIX,M,N);
 int Z=SUMMIDCOL(MATRIX,M,N);
 cout<<"\nSum of MIDDLE column is "<<Z;
 getch();
}

