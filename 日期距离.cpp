#include<stdio.h>
int main()
{
	int a, b, c, x=0, y=0, m=0, n=0, i;
	scanf("%d/%d/%d", &a, &b, &c);
	if(0<a<=12){
		if((c%400==0)||(c%4==0&&c%100!=0)){
			switch(a){
				case 1:if(1<=b<=31){x=1;break;} else{break;}
				case 2:if(1<=b<=29){x=1;break;} else{break;}
				case 3:if(1<=b<=31){x=1;break;} else{break;}
				case 4:if(1<=b<=30){x=1;break;} else{break;}
				case 5:if(1<=b<=31){x=1;break;} else{break;}
				case 6:if(1<=b<=30){x=1;break;} else{break;}
				case 7:if(1<=b<=31){x=1;break;} else{break;}
				case 8:if(1<=b<=31){x=1;break;} else{break;}
				case 9:if(1<=b<=30){x=1;break;} else{break;}
				case 10:if(1<=b<=31){x=1;break;} else{break;}
				case 11:if(1<=b<=30){x=1;break;} else{break;}
				case 12:if(1<=b<=31){x=1;break;} else{break;}
			}
		}
		else{
		    switch(a){
		    	case 1:if(1<=b<=31){x=1;break;} else{break;}
				case 2:if(1<=b<=28){x=1;break;} else{break;}
				case 3:if(1<=b<=31){x=1;break;} else{break;}
				case 4:if(1<=b<=30){x=1;break;} else{break;}
				case 5:if(1<=b<=31){x=1;break;} else{break;}
				case 6:if(1<=b<=30){x=1;break;} else{break;}
				case 7:if(1<=b<=31){x=1;break;} else{break;}
				case 8:if(1<=b<=31){x=1;break;} else{break;}
				case 9:if(1<=b<=30){x=1;break;} else{break;}
				case 10:if(1<=b<=31){x=1;break;} else{break;}
				case 11:if(1<=b<=30){x=1;break;} else{break;}
				case 12:if(1<=b<=31){x=1;break;} else{break;}
			}
		}
	} 
	
	if(0<b<=12){
		if((a%400==0)||(a%4==0&&a%100!=0)){
			switch(b){
				case 1:if(1<=c<=31){y=1;break;} else{break;}
				case 2:if(1<=c<=29){y=1;break;} else{break;}
				case 3:if(1<=c<=31){y=1;break;} else{break;}
				case 4:if(1<=c<=30){y=1;break;} else{break;}
				case 5:if(1<=c<=31){y=1;break;} else{break;}
				case 6:if(1<=c<=30){y=1;break;} else{break;}
				case 7:if(1<=c<=31){y=1;break;} else{break;}
				case 8:if(1<=c<=31){y=1;break;} else{break;}
				case 9:if(1<=c<=30){y=1;break;} else{break;}
				case 10:if(1<=c<=31){y=1;break;} else{break;}
				case 11:if(1<=c<=30){y=1;break;} else{break;}
				case 12:if(1<=c<=31){y=1;break;} else{break;}
			}
		}
		else{
		    switch(b){
		    	case 1:if(1<=c<=31){y=1;break;} else{break;}
				case 2:if(1<=c<=28){y=1;break;} else{break;}
				case 3:if(1<=c<=31){y=1;break;} else{break;}
				case 4:if(1<=c<=30){y=1;break;} else{break;}
				case 5:if(1<=c<=31){y=1;break;} else{break;}
				case 6:if(1<=c<=30){y=1;break;} else{break;}
				case 7:if(1<=c<=31){y=1;break;} else{break;}
				case 8:if(1<=c<=31){y=1;break;} else{break;}
				case 9:if(1<=c<=30){y=1;break;} else{break;}
				case 10:if(1<=c<=31){y=1;break;} else{break;}
				case 11:if(1<=c<=30){y=1;break;} else{break;}
				case 12:if(1<=c<=31){y=1;break;} else{break;}
			}
		}
	} 
	if(x==1&&y==0){
		switch(a){ 
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n", b, c+2000);
	}
	
	if(x==0&&y==1){
		switch(b){ 
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n", c, a+2000);
	}
	
	if(x==1&&y==1){
		for(i=0;i<a;i++){
	        if(i%400==0||(i%4==0&&i%100!=0)) m+=366;
            else m+=365;
        }
        for(i=1;i<b;i++){
			if(i==4||i==6||i==9||i==11) m+=30;
	        else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) m+=31;
            else if(i==2&&(a%400==0||(a%4==0&&a%100!=0))) m+=29;
            else m+=28;
	        }
	m+=c;
	
	for(i=0;i<c;i++)
	{
	if(i%400==0||(i%4==0&&i%100!=0)) n+=366;
	else n+=365;
	}
	for(i=1;i<a;i++)
	{if(i==4||i==6||i==9||i==11) n+=30;
	else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) n+=31;
	else if(i==2&&((c+2000)%400==0||((c+2000)%4==0&&(c+2000)%100!=0))) n+=29;
	else n+=28;
	}
	n+=b;
	
	if(m>n)	printf("%d\n",m-n);
	else	printf("%d\n",n-m);
	}
	
	return 0;
}
