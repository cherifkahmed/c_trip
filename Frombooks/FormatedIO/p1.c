#include <stdio.h>

int main(void)
{
	int mm,dd,yyyy;
	printf("Enter a date (mm/dd/yyyy)");
	scanf("%d/%d/%d",&mm,&dd,&yyyy);
	printf("You entered the date %d%02d%2d\n\a",yyyy,mm,dd);
	return 0;
}
