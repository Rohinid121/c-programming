#include <stdio.h>

int main() {
	int age;
	printf("Enter age of voter:");
	scanf("%d", &age);
	if(age>18) {
		printf("eligible for voting\n");
	}
	else 
		printf("Not eligible");
	return 0;
}
