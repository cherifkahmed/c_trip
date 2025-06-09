#include <stdio.h>
int main(void)
{
	float r = 10.0f;
	printf("Enter the radius: ");
	scanf("%f",&r);
	float v = ( 4.0f / 3.0f ) * 3.14 * r;

	printf("%.2f \n",v);
	return 0;
}
