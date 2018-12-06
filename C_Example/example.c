#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	printf("숫자를 입력하세요");
	scanf("%d", &num1);
	for (int i = 0; i <= num1; i++) {
		printf("hello World\n");
	}
	system("pause");
	return 0;
	/*
	사용자에게 양의 정수를 하나 입력받아서 그 수만큼 "Hello world"를 반복해서
	출력하는 코드를 짜 보세요.
	*/
}
