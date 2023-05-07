#include <stdio.h>
int factorial(int);
int main(){
	int number,c,e;
	
	do{
	printf("Enter a postive integer number ");
	scanf("%d",&number);
		
	c=factorial(2*number)/(factorial(number+1)*factorial(number));
		
	printf("The catalan number is %d ",c);
		
	printf("\n If you want to exit press 0 otherweise press 1 ");
		scanf("%d",&e);
		
		}while(e==1&&e!=0);
		printf("Thanks !");
		
	return 0;
	}
	/*definition*/
	int factorial(int x){
		int i,f=1;
		for(i=1;i<=x;i++)
		{
			f=f*i;
		}
		return f;
		}
