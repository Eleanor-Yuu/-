//prints a table of squares using a for statement//

#include <stdio.h>

int main (void)
{
	int n, i;
	printf("This program prints a table of squares:\n");
	printf("Enter number of enties in table:");
	scanf("%d", &n);
	
	for( i = 1; i <= n; i++)
	  printf("%10d%10d\n", i, i*i);
	
	return 0;
 } 
