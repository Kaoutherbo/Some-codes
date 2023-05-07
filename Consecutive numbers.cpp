#include <stdio.h>
void consecutivenumbers(int x){
 int start=0,end=x/2,sum;
 while(start<end)
 {
  sum=0;
  for(int i=start;i<=end;i++)
  {
   sum=sum+i;
   if(sum==x)
   {
    for(int j=start;j<=i;j++)
    
     printf("%d ",j);
    
    printf("\n");
    break;
   }
  }
  sum=0;
  start++;
 }
}
int main()
{
 int n;
 printf("Enter a number ");
 scanf("%d",&n);
 consecutivenumbers(n);
 return 0;
}
