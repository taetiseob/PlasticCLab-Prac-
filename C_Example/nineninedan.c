#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan = 0, num = 1;
	printf("�� ��?");
	scanf("%d", &dan);

	while (num < 10) {
		
		printf("%dX%d=%d\n", dan, num, dan*num);
		num++;
	}
	system("pause");
	return 0;
}




