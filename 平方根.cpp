#include <stdio.h>
#include <math.h>
int main(){
	int n, i, a;
	double m, x;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a);
		if(a<0){
			printf("ERROR\n");
		}
		else{
			printf("%.2f\n", sqrt(a));
		} 
	}
	return 0;
}
