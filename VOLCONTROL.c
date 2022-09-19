#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int t,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	scanf("%d %d",&a,&b);
	printf("%d \n",abs(a-b));}
	return 0;
}

