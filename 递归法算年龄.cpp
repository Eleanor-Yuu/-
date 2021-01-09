#include <stdio.h>
int s(int a, int k, int n){
	if ( n == 1)
		return a;
	else
                return s(a, k, n-1)+k;
}
int main(void){
	int n, a, k;
	scanf("%d %d %d", &n, &a, &k);
	if (2<=n<=100 && 0<a <=100 && 0<=k <= 100) {
		s(a, k, n);
		printf("%d\n", s(a, k, n));
	}
	else 
	printf("Wrong Number\n");
	return 0;
}
