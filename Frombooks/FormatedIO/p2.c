#include <stdio.h>

int main(void)
{
	int item;
	float unit_price;
	int mm, yyyy, dd;
	printf("Enter item number :");
	scanf("%d",&item);
	printf("Enter unit price :");
	scanf("%f",&unit_price);
	printf("Enter purchase date (mm/dd/yyyy) :");
	scanf("%d/%d/%d",&mm,&dd,&yyyy);
	printf("Item\tunit\tPurchase\n");
	printf("    \tPrice\tDate\n");
	printf("%-2d\t$ %2.2f\t%-2d/%-2d/%-2d\n",item, unit_price,mm, dd, yyyy);

	return 0;
}
