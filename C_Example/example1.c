#include <stdio.h>

int main(void) {
	int num1;
	for (int i = 0; i <= 100; i++) {
		num1 = i % 4;
		if (num1 == 0) 
		printf("%d\n",i);
	}
	system("pause");
	return 0;
}
/*
���� ����
�ݺ����� Ȱ���� 1���� 100���� �� �� 4�ǹ�� ���� ������ ���ϼ���.
*/