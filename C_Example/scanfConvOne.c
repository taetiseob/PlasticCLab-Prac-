#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է� :");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ���:");
	printf("%d,%d,%d\n", num1, num2, num3);

	system("pause");
	return 0;
}