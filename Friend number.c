#include <stdio.h>
#include <math.h>
int prime(int x){
 int count=0;
 for(int i=2;i<=sqrt(x);i++)
 {
  if(x%i==0)
  {
   count++;
  }
 }
 return count;
 }
 int main(){
  int num1,num2,count1,count2,max,min;
 printf("Enter the first number ");
 scanf("%d",&num1);
 printf("Enter the second number ");
 scanf("%d",&num2);
    count1=prime(num1);  
    count2=prime(num2); 
  if(count1==0&&count2==0)
  {
   if(num1>num2)
   {
    max=num1;min=num2;
   }
   else
   {
    max=num2;min=num1;
   }
   if(max-min==2)
   {
    printf("Those are frind numbers ");
   }
   else
   {
    printf("not friends ");
   }
  }
  else{
  printf("not friends");
   }
  return 0;
  }
