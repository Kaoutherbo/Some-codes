#include <stdio.h>
int main()
{
	int T[8],Frq[8],i,j,count=0;
	for(i=0;i<8;i++)
	{
		printf("enter the value ");
		scanf("%d",&T[i]);
	}
	for(i=0;i<8;i++)
	{
		Frq[i]=-1;
	}
	for(i=0;i<8;i++)
	{
		count=1;
		for(j=i+1;j<8;j++)
		{
			if(T[i]==T[j])
			{
				count++;
				Frq[j]=0;
			}
		}
		if(Frq[i]!=0)
		{
			Frq[i]=count;
		}	
	}
	printf("The unique elements are :\n");
	for(i=0;i<8;i++)
	{
		if(Frq[i]==1){
		
		printf("%d\t",T[i]);
	}
	}
	return 0;
}
