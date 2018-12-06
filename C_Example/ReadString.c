#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];
	int idx = 0;

	printf("문자열 입력 :");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자단위 출력 : ");
	while (str[idx] != '\0'){
		printf("%c\n", str[idx]);
		idx++;//이것 잘 생각해 보기(while을 돌게 하기 위한 증감식)
}
	printf("\n");
	system("pause");
	return 0;
}