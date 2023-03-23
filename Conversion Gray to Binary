#include<stdio.h>
#include<math.h>
#include <stdbool.h>
int countdigit(int x){
 int c=0;
 while(x!=0)
 {
  x/=10;
  c++;
 }
 return c;
 }
bool isbinary(int y){
 int rem;bool flag=true;
 while(y!=0)
 {
  rem=y%10;
  if(rem!=0&&rem!=1)
  {
   flag=false;break;
  }
  y/=10;
 }
 return flag;
 }
int main()
{
int n,k,count,v,i,t[count],s[count-1];
bool f;
do{
printf("Enter number in Gray system: ");
scanf("%d",&n);
f=isbinary(n); 
}while(f==false);
k=n;
count =countdigit(n);
v=k/pow(10,count-1);
for(i=count-1;i>=0;i--)
{
 t[i]=k%10;
 k/=10;
}
s[0]=v;
for(i=0;i<count-1;i++)
{
 if(t[i+1]==1&&s[i]==1)
 {
  s[i+1]==0;
 }else
 {
  s[i+1]=s[i]+t[i+1];
     }
}
for(i=0;i<count;i++)
{
 printf("%d",s[i]);
 
}
return 0;
}
