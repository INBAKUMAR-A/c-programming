#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&a);
	    if(a>20)
	    printf("HOT\n");
	    else
	    printf("COLD\n");
	}
	return 0;
}

