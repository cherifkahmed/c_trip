#include <stdio.h>

int main(void)
{
	int x ;
	int poly1;
	int poly2;
	printf("Enter a value for x : ");
	scanf("%d",&x);
	poly1 = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	poly2 = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("The poly is : %d \n",poly1);
	printf("The second poly is : %d \n",poly2);
	return 0;
}
