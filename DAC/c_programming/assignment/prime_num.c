#include "prime.h"
#include <stdio.h>

int main() {
	int choice, number;
	int lower, higher;
	int count=0;

	printf("Enter choice '1' for checking number is prime or not, '2' for counting prime number from the range\n");
	scanf("%d", &choice);

	switch(choice) {
		case 1 :
			printf("Enter Number To Check The Number is Prime or Not \n");
			scanf("%d", &number);

			if(isPrime(number))
				printf("Number is Prime\n");
			else
				printf("Number is Not Prime\n");
			
			break;
		
		case 2 :	
			printf("Enter Range \n");
			scanf("%d %d", &lower, &higher);
			
			count = countPrime(lower, higher);
			printf("count = %d \n", count);
			
			break;

		default :
			printf("Enter only choice 1 or 2 \n");

		}





}
