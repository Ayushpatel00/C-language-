#include <stdio.h>
int main() 
{
   float area,pi = 3.14;
   int r;
   printf("Enter the radius value:");
   scanf("%d",&r);
   
   area = pi* r * r;
   printf("%f", area);
   return 0;
}
