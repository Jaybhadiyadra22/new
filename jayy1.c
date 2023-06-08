#include<stdio.h>
main()
{

int a=10,b=20;
int *p1,*p2,*temp;
p1=&a;
p2=&b;
printf("A = %u=%d",p1,*p1);
printf("\nb = %u=%d",p2,*p2);
temp=p1;
p1=p2;
p2=temp;
printf("\nA = %u+%d",p1,*p1);
printf("\nb= %u+%d",p2,*p2);
}




