#include<stdio.h>

sum(int ayush[],int size)
{
	int c=0,i;
	for (i=0; i<size; i++)
	{
		c+=ayush[i];
	}
	printf("sum: %d",c);

}
int main()
{
	int n;
	printf("enter value :");
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0; i<n; i++)
	
	{
		printf("enter value[%d]:",i);
		scanf("%d",&arr[i]);
		}
		
		sum(arr,n);
		return 0;
}
