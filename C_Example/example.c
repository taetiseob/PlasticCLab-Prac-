#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &num1);
	for (int i = 0; i <= num1; i++) {
		printf("hello World\n");
	}
	system("pause");
	return 0;
	/*
	����ڿ��� ���� ������ �ϳ� �Է¹޾Ƽ� �� ����ŭ "Hello world"�� �ݺ��ؼ�
	����ϴ� �ڵ带 ¥ ������.
	*/
}
