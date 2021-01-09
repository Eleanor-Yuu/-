#include <stdio.h>
#include <stdlib.h>
int main(){
	int w,n,i,a[20],b[20],c[20],k,t,m,j,x;
	char ch;
	while(ch!=EOF)
	{
	scanf("%d %d",&w,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
			c[i]=a[i];
		}
	if(w%2==0) printf("ERROR\n");
	else
	{
		for(i=0;i<=n-w;i++){
		for(j=i;j<i+w;j++)
		{
			for(k=i;k<j;k++)
			{
			if(c[k]>c[j])
		    {t=c[k];
		    c[k]=c[j];
		    c[j]=t;
		    }
			}
		}
		m=i+(w-1)/2;
		b[m]=c[m];
		for(j=i;j<i+w;j++) c[j]=a[j];
		}
		
		for(j=0;j<n;j++)
		{printf("%d ", b[j]);}
		printf("\n");		
	}
	ch=getchar();
}
    return 0;
}

