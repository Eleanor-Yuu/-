#include<stdio.h>
int main(){
	int a[10], m, i, x=0, n;

	scanf("%d", &m);
	x=0;i=0;
	s:
	    while(i<m){
		scanf("%d", &a[i]);
		
		for(n=0;n<i;n++){
			if(a[i]==a[n]){
			x++;
			i++;
			goto s;
			}
		}
		i++;
    	}

	printf("%d\n", m-x);

    return 0;
}
