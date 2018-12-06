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
보통 문제
반복문을 활용해 1부터 100까지 수 중 4의배수 수의 총합을 구하세요.
*/