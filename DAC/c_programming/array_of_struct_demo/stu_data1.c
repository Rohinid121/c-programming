//Array of student with nested address structure
//
#include <stdio.h>

struct Address {
	char city[30];
	int pincode;
};

struct Student {
	int rno;
	char name[50];
	struct Address addr; //nested structure
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
                printf("City : ");
                scanf(" %[^\n]",s[i].addr.city);
		printf("Pincode :");
		scanf("%d", &s[i].addr.pincode);
        }
}
//function to display student records

void displayData(stu s[], int n) {
        printf("\n------------------Students Record----------------------\n");
        for(int i=0; i<n; i++) {
                printf("Student %d\n", i+1);
                printf("Roll no. : %d\n",s[i].rno);
                printf("Name : %s\n", s[i].name);
                printf("City : %s\n", s[i].addr.city);
		printf("Pincode : %d\n", s[i].addr.pincode);
                printf("---------------------------------------------------\n");
        }
}

int main() {
	int n;
	printf("Enter number of Students :");
	scanf("%d", &n);

	stu s[n];
	
	inputData(s, n);
        displayData(s, n);

        return 0;
}

