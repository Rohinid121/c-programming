#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter two num :");
	scanf("%d %d",&x,&y);

	if(x>y) {
		printf("%d is greater num\n", x);
	}
	else {
		printf("%d is greater num\n", y);
	}
	return 0;

}
