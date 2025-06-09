#include <stdio.h>

int main(void)
{
	float d=0;
	float tax=d;
	printf("Enter Dolars amount: ");
	scanf("%f",&d);
	tax=d+(d*0.05);

	printf("With tax added: %.2f\n", tax);
	



	return 0;
}
