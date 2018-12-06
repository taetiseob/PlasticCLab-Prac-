#include <stdio.h>

void Recursive(int num) {
	if (num <= 0)
		return;
	printf("recursive call! %d \n", num);
	Recursive(num - 3);//함수 종료가 0이하일때 종료됨
}

int main(void) {
	Recursive(13);
	system("pause");
	return 0;
}
// RecursiveFunc.c