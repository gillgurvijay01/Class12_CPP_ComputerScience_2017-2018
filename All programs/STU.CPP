#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
 char *name;
 int rollno;
 float mark;
};

student highmarkcal(student a[],int N)
{
 student high=a[0];
 for (int i=1;i<N;i++)
 {
  if (a[i].mark>high.mark) high=a[i];
 }
 return(high);
}
void studread(student b[],int N)
{
 for (int i=0;i<N;i++)
 {
  cout<<"\nPlease enter name of "<<i+1<<" student ";
  gets(b[i].name);
  cout<<"\nPlease enter roll no of "<<i+1<<" student ";
  cin>>b[i].rollno;
  cout<<"\nPlease enter Marks of "<<i+1<<" Student ";
  cin>>b[i].mark;
 }
}

void disp(student a)
{
 cout<<"\nThe name of student ";puts(a.name);
 cout<<"\nRoll No             "<<a.rollno;
 cout<<"\n\nMarks               "<<a.mark;
}

void main()
{
 clrscr();
 student *a;
 int n;
 cout<<"\nPlease enter No of students.....";
 cin>>n;
 a=new student [n];
 studread(a,n);
 clrscr();
 student b=highmarkcal(a,n);
 disp(b);
 getch();
}