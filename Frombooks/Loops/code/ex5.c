#include "stdio.h"

int main(void)
{
	int n_days,s_day,i;
	printf("Enter number of days in month:");
	scanf("%d",&n_days);
	printf("Enter starting day of the week (l=Sun, 7=Sat) :");
	scanf("%d",&s_day);
	printf("S\tM\tT\tW\tT\tF\tS\n");
	switch (s_day) {
		case 2: printf("\t"); break;
		case 3: printf("\t\t"); break;
		case 4: printf("\t\t\t"); break;
		case 5: printf("\t\t\t\t"); break;
		case 6: printf("\t\t\t\t\t\t"); break;
		default: break;
	}
	for (i = 1; i <= n_days; i++) {
		printf("%d\t",i);
		if (s_day % 7 == 0) {
			printf("\n");
			s_day = 0;
		}

		s_day++;
	}
	printf("\n");
	return 0;

}
