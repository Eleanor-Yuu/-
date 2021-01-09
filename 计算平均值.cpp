#include<stdio.h>
int main(){
	int n, i;
	double b, sum=0.00;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	b=sum/n;
	printf("%.2f", b);
	return 0;
} 
