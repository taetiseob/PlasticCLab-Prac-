#include <stdio.h>

void Recursive(int num) {
	if (num <= 0)
		return;
	printf("recursive call! %d \n", num);
	Recursive(num - 3);//�Լ� ���ᰡ 0�����϶� �����
}

int main(void) {
	Recursive(13);
	system("pause");
	return 0;
}
// RecursiveFunc.c