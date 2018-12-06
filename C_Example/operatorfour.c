#include <stdio.h>
int main(void) {
	int num1=12; int num2 = 12;
	printf("num1: %d \n",num1);
	printf("num1++: %d\n",num1++);
	//printf("num1++:%d \n",num(12))
	//num1 +=1;
	//num1에 대입되는 우변의 값이 num1++인것 그 후에 연산
	printf("num1:%d \n\n", num1);
	
	printf("num2:%d \n", num2);
	printf("++num2:%d\n", ++num2);
	//num2 +=1;
	//printf("++num2:%d \n",num(13))
	printf("num2:%d\n", num2);

	system("pause");
	return 0;
}

//operatorfour.c