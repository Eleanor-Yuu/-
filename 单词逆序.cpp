#include<stdio.h>
#include<string.h>
int main() 
{
    int N,len;
    int i,j,k; 
    char a[1000];
    gets(a);
        len=strlen(a);
        j=0;
        for(i=0;i<len;i++)
        {
             if(a[i]!='a'||a[i]!='b'||a[i]!='c'||a[i]!='d'||a[i]!='e'||a[i]!='f'||a[i]!='g'||a[i]!='h'||a[i]!='i'
			 ||a[i]!='j'||a[i]!='k'||a[i]!='l'||a[i]!='m'||a[i]!='n'||a[i]!='o'||a[i]!='p'||a[i]!='q'||a[i]!='r'
			 ||a[i]!='s'||a[i]!='t'||a[i]!='u'||a[i]!='v'||a[i]!='w'||a[i]!='x'||a[i]!='y'||a[i]!='z'||a[i]!='A'
			 ||a[i]!='B'||a[i]!='C'||a[i]!='D'||a[i]!='E'||a[i]!='F'||a[i]!='G'||a[i]!='H'||a[i]!='I'||a[i]!='J'
			 ||a[i]!='K'||a[i]!='L'||a[i]!='M'||a[i]!='N'||a[i]!='O'||a[i]!='P'||a[i]!='Q'||a[i]!='R'||a[i]!='S'
			 ||a[i]!='T'||a[i]!='U'||a[i]!='V'||a[i]!='W'||a[i]!='X'||a[i]!='Y'||a[i]!='Z')
             {
                  for(k=i-1;k>=j;k--)
                      printf("%c", a[k]);
                  j=i;
             }
        }
    printf("\n");
    return 0; 
}
