#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;
	//int num2 = (num1(10))+2;
	//num1 -=1;
	//�������� �������Ҵ� ���Ժ���!
	printf("num1 : %d\n", num1);//9
	printf("num2 : %d\n", num2);//12

	system("pause");
	return 0;
}