#include<stdio.h>
int digit (int);
int main()
{  
 int n,i, num,res1,res2,s;
 printf("Enter a number ");
scanf("%d",&num);
res1=num;res2=num;
n=digit(num);
int arr[n];
for( i=n-1;i>=0;i--){
    arr[i]=res1%10;
    res1=res1/10;
    }
    do{
        s=0;
        for(i=0;i<n;i++){
            s=s+arr[i];
            }
            for (i=0;i<n-1;i++){
             arr[i]=arr[i+1];
             }
             arr[n-1]=s;     
     } while(s<res2);
           if(s==res2)
            printf("This is keith number");
            else
           printf("This is not keith number");
               
 return 0;
            }
            
int digit (int x){
    int cont=0;
    do{
        x=x/10;
        cont++;
    }while(x!=0);
        return cont;
        }
