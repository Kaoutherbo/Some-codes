/*
Author :Boutheldja kaouther 
input : number of players and their points
output : absolute winner 
*/
#include <stdio.h>
	int sum(int a[],int b,int c){
		int s=0;
		for(int i=b;i<c;i++)
	   {
		s=s+a[i];
		}
		return s;
		}
int powerof2(int x){
	int y=0,p=1;
for(int i=0;i<x;i++)
	{
		p=p*2;
		if(p==x)
		{
			y=1;
			break;
		}
	}
	return y;
	}
int main(){
int y,i,s1,s2,m,t[m],t1[m/2],t2[m/2];
do
{
printf("Enter the number of players ");
scanf("%d",&m);
y=powerof2(m);
}while(y!=1);
for(i=0;i<m;i++)
{
	printf("player %d Enter your points  ",i+1);
	scanf("%d",&t[i]);
}
while(m!=1)
{
t[m];t1[m/2];t2[m/2];s1=0;s2=0;
	for(i=0;i<m/2;i++)
	{
		t1[i]=t[i];
	}int k=0;
	for(i=m/2;i<m;i++)
	{
		t2[k]=t[i];k++;
	}
	s1=sum(t1,0,m/2);
	s2=sum(t2,0,m/2);
	if(s1>s2)
	{
		for(i=0;i<m/2;i++)
		{
			t[i]=t1[i];
		}
	}else
	{
		for(i=0;i<m/2;i++)
		{
			t[i]=t2[i];
		}
	}
m=m/2;
	for(i=0;i<m;i++)
	{
		printf("t[%d]=%d\n",i,t[i]);
	}
	printf("\n");
}
}
