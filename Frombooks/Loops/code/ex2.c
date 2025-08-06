#include <stdio.h>

int main(void)
{
	int a,b;
	int aux;
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	while (a != 0) {
		aux = b % a;
		b = a;
		a = aux;
	}
	printf("Greates common divisor:%d\n",b);
	return 0;
}
