#include <stdio.h>

int main(void)
{
	int n,i,j;
	float e = 1.0f;
	float k = 1.0f;
	printf("Pick when to stop:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		k = 1;
		printf("i = %d\n",i);
		for (j = 1; j <= i; j++) {
			printf("j = %d\n",j);
			k = k * j;
		}
		e = e + 1 / k;
	}
	printf("e = %.5f\n", e);
}
