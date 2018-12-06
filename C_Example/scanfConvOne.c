#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("세 게의 정수 입력 :");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력:");
	printf("%d,%d,%d\n", num1, num2, num3);

	system("pause");
	return 0;
}