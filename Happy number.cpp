#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int sum_square_digits(int x){
 int rem,s=0;
 while(x!=0)
 {
  rem=x%10;
  s=s+rem*rem;
  x/=10;
 }
 return s;
 }
int  is_happy(int y){
 int c=y;
 do
 {
  c=sum_square_digits(c);
  if(c==4)
  {
   return 0;
  }
 }while(c!=1);
 return 1;
 }
void print_result(long y,long z){
 while(y<=z)
 {
  if(is_happy(y)==1)
  {
   printf("%d",y);
  }
  y++;
 }
 }
int main(){
 long m,n;
 printf("Enter anumber ");
 scanf("%d",&m);
 printf("Enter anumber ");
 scanf("%d",&n);
 printf("Tout les heureux nombres entre %d et %d sont :",m,n);
 print_result(n, m);
 
 return 0;
}
