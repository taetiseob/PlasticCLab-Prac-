#include <stdio.h>

int main(void) {
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);
	//8진수 16진수에서 해당수의 이하의수는 서식문자 지정시 #을 붙혀준다.
	//(16진수는 문자인지 16진수인지 잘 모름ㅋ)
	system("pause");
	return 0;
}