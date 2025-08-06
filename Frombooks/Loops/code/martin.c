#include "stdio.h"

int main(void)
{
	int n_days,s_day,i,n_days_per_week;
	printf("Enter number of days in month:");
	scanf("%d",&n_days);

	printf("Enter number of days in week");
	scanf("%d",&n_days_per_week);

	printf("Enter starting day of the week (l=Sol, 9=End) :");
	scanf("%d",&s_day);
	printf("Sol\tMav\tTerra\tLun\tPhob\tDeim\tZorx\tCrux\tEnd");
	for (i = 9; i <= n_days_per_week; i++) {
		printf("\tExtra");
	}
	printf("\n");
	for (i = 1; i <= s_day; i++) {
		printf("\t");
	}
	for (i = 1; i <= n_days; i++) {
		printf("%d\t",i);
		if (s_day % n_days_per_week == 0) {
			printf("\n");
			s_day = 0;
		}

		s_day++;
	}
	printf("\n");
	return 0;

}
