#include <stdio.h>

int main(void) {
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = (double)num1 / num2;
	//(double)���� ����ȯ �ڷ����� �켱���� ����ϸ� ���ʸ� �ص� ������ �ΰ� �� �ϼ���

	printf("������ ��� : %f \n", divResult);
	system("pause");
	return 0;
}