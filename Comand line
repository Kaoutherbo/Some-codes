#include <stdio.h>
#include <stdlib.h>
int Binary_to_Gray(int );
int Decimal_to_Binary(int );
int main(int argc, char *argv[]){ 
	int a=atoi(argv[1]);
printf("Conversion Binary to Gray is:%d",Binary_to_Gray(a));
	return 0;
}
	//conversion Binary to Gray
int Binary_to_Gray(int binary){
	if(binary<10)return binary;
	else{ 
		Binary_to_Gray(binary/10);
		if(binary%10==1&&(binary/10)%10==1)
	     return 10*Binary_to_Gray(binary/10);
	else
	{
		return 1+10*Binary_to_Gray(binary/10);;
	}}}
//Conversion Decimal to Binary
int Decimal_to_Binary(int num){
	if(num==0)return 0;
	else return num%2+10*Decimal_to_Binary(num/2);
	}
