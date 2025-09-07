#include<stdio.h>

int main() {
	//int ch;
	char symbol;
	printf("Enter symbol for any operation  '+' , '-' , '*' , '/' , '%%' ");
	//ch = getchar();
	scanf("%c", &symbol);
	//ch = getchar();
	switch(symbol) {
		case '+' :
			printf("plus operation");
			break;
		case '-' :
			printf("minus operation");
			break;
		case '*' : 
			printf("multiplication operation");
			break;
		case '/' :
			printf("divide operation");
			break;
		case '%' :
			printf("modulo operation");
			break;
		default : 
			printf("enter correct option");
	}
	return 0;
}
