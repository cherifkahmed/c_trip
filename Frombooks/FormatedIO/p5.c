#include <stdio.h>

int main(void)
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14,a15, a16;
	printf("Enter the numbers from 1 to 16 in any order:");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
       &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16);
	printf("\t\t%d %d %d %d\n",a1,a2,a3,a4);
	printf("\t\t%d %d %d %d\n",a5,a6,a7,a8);
	printf("\t\t%d %d %d %d\n",a9,a10,a11,a12);
	printf("\t\t%d %d %d %d\n",a13,a14,a15,a16);

	printf("Row sums: %d\n",a1+a2+a3+a4);
	printf("Column sums: %d\n",a1+a5+a9+a13);
	printf("Diagonal sums: %d\n",a1+a6+a11+a16);
	return 0;
}
