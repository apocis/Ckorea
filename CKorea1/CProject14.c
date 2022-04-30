#include <stdio.h>

void main14() {
	// 숫자를 2개 입력받아서
	//더하기,빼기,곱하게,나누기,나머지구하기
	
	/*
	입력 예시 5, 5
	더하기 : 10
	빼기 : 0
	곱하기 : 25
	나누기 : 1.0
	나머지구하기 : 0
	*/
	int num1;
	int num2;
	

	printf("첫번째 숫자입력 >>>");
	scanf_s("%d", &num1);
	printf("\n두번째 숫자 입력 >>>");
	scanf_s("%d", &num2);
	printf("\n더하기 : %d", num1+num2);
	printf("\n빼기 : %d", num1 - num2);
	printf("\n곱하기 : %d", num1 * num2);
	printf("\n나누기 : %.1f", num1 / (float)num2);
	printf("\n나머지구하기 : %d", num1 % num2);
}