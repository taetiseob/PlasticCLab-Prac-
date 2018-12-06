#include <stdio.h>

int main(void) {
	printf("%f\n", 0.1234);
	printf("%e\n", 0.1234);
	printf("%f\n", 0.12345678);//6자리까지 표기이므로 7번째 자리 7의 반올림
	printf("%e\n", 0.12345678);
	system("pause");
	return 0;
}