#include <stdio.h>

int main(void) {
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1*num2);
	printf("%d/%d=%d \n", num1, num2, num1 / num2);
	printf("%d%%%d의 나머지%d \n", num1, num2, num1%num2);//%문자열 표기는 %% 연달아 쓴다.
	system("pause");
	return 0;
}