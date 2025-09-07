#include "prime.c"

int countPrime(int lower_num, int higher_num) {

	int count=0;

	for(int i = lower_num; i <= higher_num; i++) {
		if(isPrime(i))
			count++;
	}
	return count;
}
