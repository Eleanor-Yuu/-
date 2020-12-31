//Balances a checkbook//

#include <stdio.h>

int main (void)
{
	int n;
	float m = 0.0f, a, b;
	printf("*** ACME checkbook-balancing program ***\nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
	for (;;) {
		printf("Enter command:");
		scanf("%d", &n);
		switch (n) {
			case 0: m = 0.0f; break;
			case 1: printf("Enter amount of credit:");
		            scanf("%f", &a);
		            m += a; 
					break;
		    case 2: printf("Enter amount of debit:");
		            scanf("%f", &b);
		            m -= b; 
					break;
		    case 3: printf("Current balance: $%.2f\n", m);
			        break;
		    case 4: return 0;
		    default: printf("Sorry.Your command is illagal.Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
			        break;
		}
	}
}
