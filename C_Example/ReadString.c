#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� :");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���ڴ��� ��� : ");
	while (str[idx] != '\0'){
		printf("%c\n", str[idx]);
		idx++;//�̰� �� ������ ����(while�� ���� �ϱ� ���� ������)
}
	printf("\n");
	system("pause");
	return 0;
}