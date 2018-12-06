#include <stdio.h>

int main(void) {
	int num1, num2;//변수 num1, num2의 선언
	int num3 = 30, num4 = 40;// 변수 num3, num4의 선언 및 초기화

	//printf("num1:%d, num2:%d\n", num1, num2); 구버전에는 초기화 되지 않은 변수에 랜덤값이 적용됬었음
	num1 = 10;//변수 num1의 초기화
	num2 = 20;//변수 num2의 초기화

	printf("num1:%d, num2: %d \n", num1, num2);
	printf("num3:%d, num4: %d \n", num3, num4);
	system("pause");
	return 0;
	//변수를 여러개 만들때 우선 선언부터 한 후 초기화 한다(순서대로)
}