#include<stdio.h>
void main()
{
    int* x;
int a=5;
x= &a;

printf("Enter the value of A\n");
scanf("%d",x);
*x= a*a;
printf("%d",a);
}