//Sums a series of numbers//

#include <stdio.h>

int main(void)
{
	int n, sum;
	printf("This program sums a series of integers.\nEnter integers (0 to terminate):");
	scanf("%d", &n);
	while (n != 0){
		sum += n;
		scanf("%d", &n);
	}
	printf("sum=%d\n", sum);
	return 0;
 } 
