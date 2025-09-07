#include <stdio.h>
#include <stdlib.h>

struct person {
	int age;
	float weight;
	char name[30];
};

int main() {
	struct person *ptr;
	int i, n;

	printf("Enter the no of persons");
	scanf("%d", &n);

	//allocating memory for n numbers of struct person
	ptr = (struct person*) malloc(n * sizeof(struct person));

	for(i=0; i<n; i++) {
		printf("\nEnter first name and age respectively ");

		//to access member of 1st struct person,
		//ptr->name and (ptr+1)->age is used
		
		scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);

	}

	printf("Displaying Information: \n");
	for(i=0; i<n; i++)
		printf("Name : %s \t Age : %d\n", (ptr+i)->name, (ptr+i)->age);

	return 0;
}
