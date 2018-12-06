#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다!\n");
	goto END;
TWO:
	printf("2를 입력하셨습니다!\n");
	goto TWO;
OTHER:
	printf("다른값을 입력하셨습니다!\n");
END:
	system("pause");
	return 0;

}	
	