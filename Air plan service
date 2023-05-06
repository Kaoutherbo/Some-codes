//count the number of passengers and windows

#include<stdio.h>

int main(){
 int n,e, passengers=0,window=0;
   do{
  printf("if the number of passengers has ended press 1 else press 0 ");//to ask the user wether the places are avaible or not and that for stop asking the passengers to choose the places 
  scanf("%d",&e);
  if(e==1) break;// key word jump out repetion and stop execution of repitive statment
  else{
   printf("if you want a window press 1 else press 0 ");//choices
   scanf("%d",&n);
    if(n==1)
      {
   passengers++;
   window++;
      }
      if(n==0)
      {
     passengers++;
      }
  }
 }while(window>4||passengers<8);//condition 
 printf("\n the number of windows is %d \nthe number of passengers is %d ",window,passengers);
 return 0;
 }
