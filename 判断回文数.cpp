#include<stdio.h>
int main(void){
	int n, i, m, a, b;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		b=m;
		a=0;
	    while(b>0){
	    a=a*10+b%10;
	    b=b/10;}

     	if(a==m) 
		printf("Yes\n");
    	else 
 		printf("No\n");} 
 	return 0; 
}
