#include <stdio.h>

int main(void) {

	int x, y, sum;
	x = x - 4;
	y = y - 5;
	for (x = 1; x <= 12; x++) {
		if(x==56)
		for (y = 1; y <= 55; y++) {
			sum = x + y;
		}
		if(sum==60)
		printf("%d\n", sum-9);
	}
	
	system("pause");
	return 0;
/*
5x+4y=60을 만족시키는 양의 미지수 x와 y를 모두 구하세요.
중첩반복문
*/
}