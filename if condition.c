// Finding the maximum of two integers using if condition by using only two variables(a and b):

#include<stdio.h>
void main()
{
    int a,b; //variables declaring
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);// get  the inputs from the user
    if(a<b){ // if condition
        a=b;
    }
    printf("The maxof two integer :%d",a);
}