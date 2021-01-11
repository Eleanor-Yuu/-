#include <stdio.h>
int main(){
	int n, i, a, m, k, j, t, d, min;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	    scanf("%d", &a);
	    int x[a];
	    for(m=0; m<a; m++){
	    	scanf("%d", &x[m]);
		}
		for(m=0;m<(a-1);m++){
			if(x[m]==x[m+1]){
				k=1;
			}
			else {
				k=0;
				goto we;
			}
		}
	we:	
	 for(d=0;d<a-1;d++){
	    for(m=0;m<a-1-d;m++){
	    	if(x[m]>x[m+1]){
	    		t=x[m];
	    		x[m]=x[m+1];
	    		x[m+1]=t;
			}
		}}
	min=x[0];
	for(m=0;m<a;m++){
		if(x[m]>min){
			min=x[m];
			goto wr;
		}
	}
	wr:
	if(a==1||k==1){
		printf("ERROR\n");
	}
	else{
    printf("%d\n", min);}
}
    return 0;
	}

