#include <stdio.h>

int add(int x, int y) {
	
	return x + y;
}
int main(void) {
	int result;
	result = add(3, 4);
	printf("�������1: %d \n", result);
	result = add(5, 8);
	printf("�������2: %d \n", result);
	system("pause");
	return 0;
	//���� ������ �Լ��� ȣ������ �ʾƵ� ������ ��
	//return �������ǹ� = ��ȯ�ϴ�
	//���α׷���=>�����ִ�X ��°� ����X !������ �غ��Ѵ�(EX:�ù�����)
	//���常�ϰ� ������� ������ �ƹ��ϵ� �Ͼ�� ����
}