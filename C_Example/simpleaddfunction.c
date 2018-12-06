#include <stdio.h>

int add(int x, int y) {
	
	return x + y;
}
int main(void) {
	int result;
	result = add(3, 4);
	printf("덧셈결과1: %d \n", result);
	result = add(5, 8);
	printf("덧셈결과2: %d \n", result);
	system("pause");
	return 0;
	//굳이 선언한 함수를 호출하지 않아도 실행이 됨
	//return 사전적의미 = 반환하다
	//프로그래밍=>돌려주다X 출력과 관련X !돌려줄 준비를한다(EX:택배포장)
	//포장만하고 배송하지 않으면 아무일도 일어나지 않음
}