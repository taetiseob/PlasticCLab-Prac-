#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result;
	int num1, num2;

	printf("���� one:");
	scanf_s("%d", &num1);//ù��° ���� �Է�
	printf("���� two: ");
	scanf_s("%d", &num2);//�ι�° ���� �Է�

	/*
	scanf();�� ġ���� ����
	�޸� ���� ����
	����������� �������� ũ�� �˻簡 ����.
	scanf_s();
	*/

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	system("pause");
	return 0;
}