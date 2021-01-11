#include<stdio.h>
#include <string.h>
int main(){
	int n, i, x, m=0, l, y;
	char a[101]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s",&a);
		l=strlen(a);
		for(x=0;x<=l-2;x++){
			if(a[x]=='S'&&a[x+1]=='C'&&a[x+2]=='U'){
				if(x==0&&l==3){
					m=1;
					goto x;
				} 
				for(y=0;y<=x-1;y++){
					if(a[y]!='A'){
						m=0;
						goto x;
					}
				}
				for(y=x+3;y<=l-1;y++){
					if(a[y]!='A'){
						goto x;
					}
				}
				if(x!=l-3-x){
					goto x;
				}
				m=1;
				goto x;
			}
		}
		x:if(m==0) printf("NO\n");
		if(m==1) printf("YES\n");
		m=0;
		char a[101]={0};
	}
	return 0;
}
