#include <stdio.h>

int main(void) {
	int num1 = 100 , num2 = 100;
	int *pnum;

	pnum = &num1;//������ pnum�� num1�� ����Ŵ &�ּҰ� ȣ��(�˷���) *�ּҰ����� ���°�
	(*pnum) += 30;//num+=30�� ����

	pnum = &num2;//������ pnum�� num2�� ����Ŵ
	(*pnum) -= 30;

	printf("num1:%d, num2:%d \n", num1, num2);

	system("pause");
	return 0;
}