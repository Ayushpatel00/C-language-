#include<stdio.h>
int main()
{
	int n,f=1,i=1;
	
    printf("\nEnter the number : ");
    scanf("%d",&n);
     
    do
    {
        f=f*i;
        i++;
    }while(i<=n);
    printf("factorial :%d",n,f);
return 0;
}

