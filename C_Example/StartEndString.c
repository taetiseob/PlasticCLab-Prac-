#include <stdio.h>

int main(void) {
	char str[] = "I like C programming";   //21
	printf("string: %s \n", str);

	str[20] = ' ';   //21��° ������ �� ���ڸ� ����� ����
	printf("string: %s \n", str);   //�� ��Ʈ�� ���� ���

	str[8] = '\0';   //9��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);

	str[6] = '\0';   //7��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);

	str[1] = '\0';   //2��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);

	system("pause");
	return 0;
}
//StartEndString.c