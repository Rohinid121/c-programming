//Student Record...
//
//


#include<stdio.h>

struct Student {
	int rno;
	char name[20];
	float marks;
};

typedef struct Student stu;

//function to take input from user

void inputData(stu s[], int n) {
	for (int i=0; i<n; i++) {
		printf("\n Enter Details for Student %d \n", i+1);
		printf("Roll No.: ");
		scanf("%d",&s[i].rno);
		printf("Name : ");
		scanf(" %[^\n]", s[i].name);
		printf("Marks : ");
		scanf("%f",&s[i].marks);
	}
}
//function to display student records
//

void displayData(stu s[], int n) {
	printf("\n------------------Students Record----------------------\n");
	for(int i=0; i<n; i++) {
		printf("Student %d\n", i+1);
		printf("Roll no. : %d\n",s[i].rno);
		printf("Name : %s\n", s[i].name);
		printf("Marks : %.2f\n", s[i].marks);
		printf("---------------------------------------------------\n");
	}
}

int main() {
	int n;
	printf("Enter number of Students: ");
	scanf("%d", &n);

	stu s[n];

	inputData(s, n);
	displayData(s, n);

	return 0;
}
