#include <stdio.h>

int main(void)
{
	int dollars;
	int bills20;
	int bills10;
	int bills5;
	int bills1;

	printf("Enter dollars amount :");
	scanf("%d",&dollars);
	bills20 = dollars / 20;
	dollars = dollars % 20;

	bills10 = dollars / 10;
	dollars = dollars % 10;

	bills5 = dollars / 5;
	dollars = dollars % 5;

	bills1 = dollars;

	printf("$20 bills: %d\n",bills20);
	printf("$10 bills: %d\n",bills10);
	printf("$5 bills: %d\n",bills5);
	printf("$1 bills: %d\n",bills1);

	return 0;
}
