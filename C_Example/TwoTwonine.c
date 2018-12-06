#include <stdio.h>

int main(void) {
	int cur = 2;
	int is = 0;//담기전에 비우는곳 순수변수

	while (cur < 10) {
		is = 1;//담아서 쓰는곳
		while (is < 10) {
			printf("%dX%d=%d\n", cur, is, cur*is);
			is++;
		}
		cur++;
		printf("\n");
	}
	system("pause");
	return 0;
}