#include <stdio.h>

int main(void)
{
	float loan, payment, rate;
	float first, second, third;
	float monthly_interest_rate;
	printf("Enter amount of loan:");
	scanf("%f",&loan);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);
	monthly_interest_rate = rate / 100 / 12;
	printf("%f",monthly_interest_rate);
	loan = (loan - payment) + (loan* monthly_interest_rate);
	printf("Balance remaining after first payment: %.2f\n",loan);
	loan = (loan - payment) + (loan* monthly_interest_rate);
	printf("Balance remaining after second payment: %.2f\n",loan);
	loan = (loan - payment) + (loan* monthly_interest_rate);
	printf("Balance remaining after third payment: %.2f\n",loan);
	return 0;
}
