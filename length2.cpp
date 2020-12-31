//Determines the length of a message//

#include <stdio.h>
int main(void){
	int leng = 0;
	printf("Enter a message:");
	while(getchar() != '\n'){
		leng++;
	}
	printf("Your message was %d character(s) long.\n",leng);
	return 0;
}
