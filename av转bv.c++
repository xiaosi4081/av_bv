#include<iostream>
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
bool su(bool a,bool b)
{
 bool e;
 if(a==1&&b==1)
 e=0;
 if(a==0&&b==0)
 e=0;
 if(a==1&&b==0)
 e=1;
 if(a==0&&b==1)
 e=1;
 return e;
}
int main()
{
 int av[11],t[11],p[11],n,i,j,l,s=0,k;
 long long f[11],h=0,w,m=0;
 bool a[501],b[501]={1,0,1,0,1,0,0,1,0,0,1,1,1,0,1,1,0,0,1,1,0,0,1,0,0,1,0,0},c[501],d[501];
 char bv[11],ap[3];
 for(i=1;i<=2;i++)
 cin>>ap[i];
 for(i=0;i<10;i++)
 cin>>bv[i];
 for(i=0;i<10;i++)
  switch(bv[i])
  {
  case 'a' : t[i]=26;
  continue;
  case 'b' : t[i]=29;
  continue;
  case 'c' : t[i]=56;
  continue;
  case 'd' : t[i]=4;
  continue;
  case 'e' : t[i]=24;
  continue;
  case 'f' : t[i]=0;
  continue;
  case 'g' : t[i]=47;
  continue;
  case 'h' : t[i]=27;
  continue;
  case 'i' : t[i]=22;
  continue;
  case 'j' : t[i]=41;
  continue;
  case 'k' : t[i]=16;
  continue;
  case 'm' : t[i]=11;
  continue;
  case 'n' : t[i]=37;
  continue;
  case 'o' : t[i]=2;
  continue;
  case 'p' : t[i]=35;
  continue;
  case 'q' : t[i]=21;
  continue;
  case 'r' : t[i]=17;
  continue;
  case 's' : t[i]=33;
  continue;
  case 't' : t[i]=30;
  continue;
  case 'u' : t[i]=48;
  continue;
  case 'v' : t[i]=23;
  continue;
  case 'w' : t[i]=55;
  continue;
  case 'x' : t[i]=32;
  continue;
  case 'y' : t[i]=14;
  continue;
  case 'z' : t[i]=19;
  continue;
  case 'A' : t[i]=54;
  continue;
  case 'B' : t[i]=20;
  continue;
  case 'C' : t[i]=15;
  continue;
  case 'D' : t[i]=8;
  continue;
  case 'E' : t[i]=39;
  continue;
  case 'F' : t[i]=57;
  continue;
  case 'G' : t[i]=45;
  continue;
  case 'H' : t[i]=36;
  continue;
  case 'J' : t[i]=38;
  continue;
  case 'K' : t[i]=51;
  continue;
  case 'L' : t[i]=42;
  continue;
  case 'M' : t[i]=49;
  continue;
  case 'N' : t[i]=52;
  continue;
  case 'P' : t[i]=53;
  continue;
  case 'Q' : t[i]=7;
  continue;
  case 'R' : t[i]=4;
  continue;
  case 'S' : t[i]=9;
  continue;
  case 'T' : t[i]=50;
  continue;
  case 'U' : t[i]=10;
  continue;
  case 'V' : t[i]=44;
  continue;
  case 'W' : t[i]=34;
  continue;
  case 'X' : t[i]=6;
  continue;
  case 'Y' : t[i]=25;
  continue;
  case 'Z' : t[i]=1;
  continue;
  case '1' : t[i]=13;
  continue;
  case '2' : t[i]=12;
  continue;
  case '3' : t[i]=46;
  continue;
  case '4' : t[i]=31;
  continue;
  case '5' : t[i]=43;
  continue;
  case '6' : t[i]=18;
  continue;
  case '7' : t[i]=40;
  continue;
  case '8' : t[i]=28;
  continue;
  case '9' : t[i]=5;
  continue;
 }
 f[0]=t[0]*pow(58,6);
 f[1]=t[1]*pow(58,2);
 f[2]=t[2]*pow(58,4);
 f[3]=t[3]*pow(58,8);
 f[4]=t[4]*pow(58,5);
 f[5]=t[5]*pow(58,9);
 f[6]=t[6]*pow(58,3);
 f[7]=t[7]*pow(58,7);
 f[8]=t[8]*58;
 f[9]=t[9];
 for(i=0;i<10;i++)
 h=h+f[i];
 for(i=0;i<=10;i++)
 for(i=0;i<10;i++)
 w=h-100618342136696320;
 i=w;
 j=0;
   while(i)
   {
    a[j]=i%2;
    i/=2;
    j++;
   }
   for(i=j-1;i>=0;i--)
   {
    c[m]=a[i];
 m++;
   }
   for(i=0;i<28;i++)
   for(i=0;i<28;i++)
   d[i]=su(c[i],b[i]);
   for(i=0;i<28;i++)
   j=0;
   m=0;
   for(i=28;i>0;i--)
   {
    m=d[j]*pow(2,i-1)+m;
    j++;
   }
   cout<<"av"<<m<<endl;
   cout<<"输出任意字符以结束程序"<<endl;
   cin>>ap[3];
 return 0;
}