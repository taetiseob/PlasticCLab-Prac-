#include <stdio.h>

int main(void) {
	char str[] = "Good Morning!";
	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
	printf("�� ���� ������ ��� : %c \n", str[13]);//������� �Ⱥ���
	printf("�� ���� ������ ��� : %d \n", str[13]);

	str[12] = '?';//�迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
	printf("���ڿ� ��� : %s \n", str);

	system("pause");
	return 0;
}