#include <stdio.h>

int main(void) {
	int cur = 2;
	int is = 0;//������� ���°� ��������

	while (cur < 10) {
		is = 1;//��Ƽ� ���°�
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