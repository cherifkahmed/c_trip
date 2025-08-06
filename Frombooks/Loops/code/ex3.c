#include <stdio.h>

int main(void)
{

	int a,b,a1,b1;
	int aux;
	printf("Enter a fraction:");
	scanf("%d/%d",&a,&b);
	a1 = a;
	b1 = b;
	while (a != 0) {
		aux = b % a;
		b = a;
		a = aux;
	}
	printf("In lowest terms:%d/%d\n", a1 / b, b1 /b);
	return 0;
}
