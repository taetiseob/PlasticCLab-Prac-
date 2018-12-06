#include <stdio.h>

int main(void) {
	printf("%-8s %14s %5s \n", "이름", "전공학과", "학년");
	printf("%-8s %14s %5d \n", "김동수", "전자공학", 3);//e-8과 같다 왼쪽에서부터 오른쪽으로 8칸 확보
	printf("%-8s %14s %5d \n", "이을수", "컴퓨터공학", 2);//+14 거꾸로부터 프린트함 학,공,자,전
	printf("%-8s %14s %5d \n", "한선영", "미술교육학", 4);
	system("pause");
	return 0;
}