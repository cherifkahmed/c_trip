#include <stdio.h>

int main(void)
{
	int gs1, gid, pub_code, itemN, check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&gs1,&gid,&pub_code,&itemN,&check_digit);
	printf("GSI prefix:%d\n",gs1);
	printf("Group identifier:%d\n",gid);
	printf("Publisher code:%d\n",pub_code);
	printf("Item number: %d\n",itemN);
	printf("Check digit: %d\n",check_digit);
	return 0;
}
