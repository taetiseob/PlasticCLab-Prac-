#include <stdio.h>

int main(void) {
	int num1 = 15; //00000000 00000000 00000000 00001111 int��4byte�̹Ƿ�
	int num2 = 20; //00000000 00000000 00000000 00010100
	int num3 = num1 & num2; //num1�� num2�� ��Ʈ���� &����
	printf("AND ������ ��� : %d \n", num3);

	system("pause");
	return 0;
}