/*Program to make an array of ten nubers display sum of odd nubers and
  product of even numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int x[10];  //Size of array
 int  sum=0;
 float prod=1;
 for (int j=0;j<=9;j++)
 {
  cout<<"\nPlease enter number         :";
  cin>>x[j];         //accaeptance of element
 }
 for (int z=0;z<=9;z++)
 {
  if (x[z]%2==0)     //if the number is even
   prod=prod*x[z];

  if(x[z]%2!=0)    //if the number is odd
  sum=sum+x[z];
  }
  cout<<"\nSum of odd elements         =="<<sum;
  cout<<"\nProduct of even elements    =="<<prod;
  getch();
}