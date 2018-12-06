#include <stdio.h>

int main(void) {
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = (double)num1 / num2;
	//(double)강제 형변환 자료형의 우선순위 고려하면 왼쪽만 해도 되지만 두개 다 하셈ㅋ

	printf("나눗셈 결과 : %f \n", divResult);
	system("pause");
	return 0;
}