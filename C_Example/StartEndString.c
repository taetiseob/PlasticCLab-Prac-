#include <stdio.h>

int main(void) {
	char str[] = "I like C programming";   //21
	printf("string: %s \n", str);

	str[20] = ' ';   //21번째 문자인 널 문자를 띄어쓰기로 변경
	printf("string: %s \n", str);   //널 스트링 없이 출력

	str[8] = '\0';   //9번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[6] = '\0';   //7번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[1] = '\0';   //2번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	system("pause");
	return 0;
}
//StartEndString.c