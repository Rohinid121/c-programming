#include <stdio.h>

int main() {

	printf("Hello world\n");  
	
	printf("Line: %d \n", __LINE__);  //print current line

	#line 36  //reset the line number by 36 
	
	//reseting
	
	printf("Line: %d \n", __LINE__);  //print current line

	printf("byebye..!\n");

	return 0;


}

	

