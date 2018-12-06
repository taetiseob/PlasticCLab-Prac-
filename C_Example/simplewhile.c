#include <stdio.h>

int main(void) {
	int num = 0;

	while (1)
	{
		printf("Hello World!%d\n", num);
		num++;
	}//반복문의 탈출은 무조건 비교여하에 따라

	system("pause");
	return 0;

}