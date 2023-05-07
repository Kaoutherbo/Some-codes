#include <stdio.h>
int main(){
	int n,t[n],i,dec;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter the element of array \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&t[i]);	
	}
	for(i=0;i<n;i++)
	{
		printf("%d",t[i]);
	}
	printf("Enter the nbr of decalage ");
	scanf("%d",&dec);
	for(i=0;i<dec;i++)
	{
		t[i]=t[i++];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",t[i]);
	}
	return 0;
	}
