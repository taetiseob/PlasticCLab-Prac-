#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result;
	int num1, num2;

	printf("정수 one:");
	scanf_s("%d", &num1);//첫번째 정수 입력
	printf("정수 two: ");
	scanf_s("%d", &num2);//두번째 정수 입력

	/*
	scanf();의 치명적 결함
	메모리 접근 권한
	집어넣으려는 데이터의 크기 검사가 없다.
	scanf_s();
	*/

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	system("pause");
	return 0;
}