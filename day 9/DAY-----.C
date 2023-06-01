#include<stdio.h>
#include<conio.h>
int main();
clrscr ();
int a,b,c;
printf("enetr the A :");
scanf("%d", &a);
printf("enetr the B :");
scanf("%d", &b);
printf("enetr the C :");
scanf("%d", &c);

if(a<b) {
       if(a<c) {
	  printf("A is min\n");
	  }
}
else  {
     printf("c is min\n");
     }
}
else0 {
     if(b<c){
	   printf("B is min\n");
	   }
	   else{
	   printf("C is min\n");
}
getch();
return 0;