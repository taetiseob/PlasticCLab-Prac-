#include <stdio.h>

int main(void) {
	printf("%f\n", 0.1234);
	printf("%e\n", 0.1234);
	printf("%f\n", 0.12345678);//6�ڸ����� ǥ���̹Ƿ� 7��° �ڸ� 7�� �ݿø�
	printf("%e\n", 0.12345678);
	system("pause");
	return 0;
}