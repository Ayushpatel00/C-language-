#include <stdio.h>

int main()
{
    int a,b,c,d,e;
  
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);
  
    printf("enter c: ");
    scanf("%d",&c);
  
    printf("enter d: ");
    scanf("%d",&d);

    printf("enter e: ");
    scanf("%d",&e);
  
    int min = a;
  
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;

    printf("%d", min);
  
    return 0;
}

