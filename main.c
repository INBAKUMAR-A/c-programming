#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    max=a;
    if(a<b){
        max=b;
    }
    printf("The maximum integer is: %d",max);
}