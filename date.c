//prints a date in lagal form// 

#include <stdio.h>

int main(void)
{
	int month, day, year, x, y, z;
	
	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d",&month, &day, &year);
	
	printf("Dated this %d", day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default:
			printf("th"); break;
	}
	
	printf(" day of ");
	
	switch (month) {
		case 1: printf("Januaray"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		default: printf("December"); break;
	}
	
	printf(", 20%.2d",year);
	
	if ( ( year % 4 ) == 0) {
		switch (month) {
			case 10: x=6; break;
			case 5: x=0; break;
			case 2: case 8: x=1; break;
			case 3: case 11: x=2; break;
			case 6: x=3; break;
			case 9: case 12: x=4; break;
			default: x=5; break;
		}
	}
	else {
		switch (month) {
			case 1: case 10: x=6; break;
			case 5: x=0; break;
			case 8: x=1; break;
			case 2: case 3: case 11: x=2; break;
			case 6: x=3; break;
			case 9: case 12: x=4; break;
			default: x=5; break;  
		}
	}
	
	y = ( year / 4 + year )% 7;
	z = ( x + y + day ) % 7;

	switch (z) {
		case 1: printf(", Monday.\n"); break; 
		case 2: printf(", Tuesday.\n"); break; 
		case 3: printf(", Wednesday.\n"); break; 
		case 4: printf(", Thursday.\n"); break; 
		case 5: printf(", Friday.\n"); break; 
		case 6: printf(", Saturday.\n"); break; 
		default: printf(", Sunday.\n"); break; 
	}
	
	return 0;
}
