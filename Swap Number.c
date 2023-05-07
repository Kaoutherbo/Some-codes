#include <stdio.h>
int main(){
 int swap,n,k,puissance,i,count,first ,last;
 printf("enter the number ");
 scanf("%d",&n);
 k=n;count=0;
 last=n%10;
 while(n>10)
 {
  n=n/10;
  count++;
 }
 first=n;
 puissance=1;
 for(i=1;i<=count;i++)
 {
  puissance=puissance*10;
 }

 swap=last*puissance;
 k=k%puissance;
 swap=swap+k-last+first;
 printf("the swap of number is :%d",swap);
 return 0;
 }