/* WAP to check the following :
  A. Prime no. or Not
  B. Palindrome or Not
  C. Armstrong no.
  D. Reverse No.
  E. Count Digit
  */

#include<stdio.h>

int main() {
	char choice;

	printf("Enter choice A. to check number is prime or not \n B. Number is Palindrome or not \n C. Number is armstrong or not \n D. Reverse the Number \n E. Count digits of any Number. \n");
	scanf("%c", &choice);

	switch (choice) {

		case 'A' :
			int number;

			printf("Enter Number\n");
			scanf("%d", &number);

			if(isPrime(number))
				printf("Prime Number");
			else
				printf("Not Prime Number");

			break;
		case 'B' :
			int Pnum;
			
			printf("Enter Number");
			scanf("%d", &Pnum);

			if(isPalindrome(Pnum))
				printf("Palindrome Number");
			else 
				printf("Not Palindrome Number");

			break;

		case 'C' :
			int Anum;

			printf("Enter Number");
			scanf("%d", &Anum);

			if(isArmstrong(Anum))
				printf("Armstrong Number");
			else 
				printf("Not an Armstrong Number");

			break;

		case 'D' :
			int Rnum, rev;

			printf("Enter Number");
			scanf("%d", &Rnum);

			rev = isReverse(Rnum);

			printf("reverse number : %d", rev);

			break;

		case 'E' :
			int Cnum;

			printf("Enter Number");
			scanf("%d", &Cnum);

			count = isCount(Cnum)

