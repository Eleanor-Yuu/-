#include<stdio.h>
int main (){
	int n, i, m, x, q, p;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &m);
		for(x=2; x<=m; x++){   
		    //�ж�x�ǲ������� 
		    for(q=2; q<x; q++){
		    	if(x%q==0){
		    		goto abc;
				}
			}
			//�ж�m�ܷ����q 
			if(m==q) {
				printf("%d\n", m);
				goto def;
			}
			else if(m%q==0&&m!=q){
				printf("%d*", q);
				m=m/q;
				x=1;
			}
abc:
			p=0;	
    	}
    	def:
    		p=0;
    }
return 0;
}

