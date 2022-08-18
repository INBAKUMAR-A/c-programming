// Finding the maximum of two integers without using if condition by using only two variables(a and b):

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    a=(a>b)*a+(b>a)*b;
    printf("The max integer of the two number is:%d",a);
}