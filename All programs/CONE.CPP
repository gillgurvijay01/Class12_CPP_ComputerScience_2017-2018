// This is Program to find CSA,TSA and volume of cone
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 const float PI=3.14;
 float R,H,L,TSA,CSA,V;
 cout<<"\nPlease enter radius of cone :";
 cin>>R;
 cout<<"\nPlease enter height of cone :";
 cin>>H;
 L=sqrt(R*R+H*H);
 TSA=PI*R*(L+R);
 CSA=PI*R*L;
 V=(PI*R*R*H)/3;
 cout<<"\n\nTSA of cone                 ="<<TSA<<" CM^2";
 cout<<"\n\nCSA of cone		    ="<<CSA<<" CM^2";
 cout<<"\n\nVolume of cone		    ="<<V<<" CM^342
 ";
 getch();
}