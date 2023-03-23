#include <stdio.h>
#include <stdbool.h>
typedef unsigned int positiveInteger;

positiveInteger read_number();
positiveInteger sum_proper_divisor(positiveInteger );
bool is_amicable(positiveInteger ,positiveInteger );
void print_result(bool);
int main(){
 positiveInteger input_N=read_number();
 positiveInteger input_M=read_number();
    print_result(is_amicable(input_N, input_M));

 return 0;
 }
positiveInteger read_number(){
 positiveInteger number;
  do
  {
   printf("Enter a number ");
   scanf("%d",&number);
  }while(number<=0);
  }
positiveInteger sum_proper_divisor(positiveInteger num){
 positiveInteger s=0;
 for(size_t i=1;i<=num/2;i++)
 {
  if(num%i==0)
  s=s+i;
 }
 return s;
 }
 bool is_amicable(positiveInteger n,positiveInteger m){
return (sum_proper_divisor(n)==m &&sum_proper_divisor(m)==n);
    
  }
void print_result(bool result){
 if(result)
 {
  printf(_Format:"this is an amicable number ");
 }
 else
 {
  printf(_Format"this is not an amicable number ");
 }
}
