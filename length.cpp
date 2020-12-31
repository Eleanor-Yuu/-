//Determines the length of a message//

#include <stdio.h>

int main(void){
	char ch;
	int leng=0;
	printf("Enter a message:");
	ch = getchar();
	while ( ch != '\n' ){
		leng++;
		ch = getchar();
	}
    printf("Your message was %d character(s) long.\n",leng);
    
    return 0;
} 
