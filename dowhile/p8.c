#include <stdio.h>
int main()
{
    int i=0;
	int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
     
    do
    {
        sum=sum+i;
        i++;
        
    }while(i<=n);
    printf("sum :%d",sum);
return 0;
}

