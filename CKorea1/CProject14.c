#include <stdio.h>

void main14() {
	// ���ڸ� 2�� �Է¹޾Ƽ�
	//���ϱ�,����,���ϰ�,������,���������ϱ�
	
	/*
	�Է� ���� 5, 5
	���ϱ� : 10
	���� : 0
	���ϱ� : 25
	������ : 1.0
	���������ϱ� : 0
	*/
	int num1;
	int num2;
	

	printf("ù��° �����Է� >>>");
	scanf_s("%d", &num1);
	printf("\n�ι�° ���� �Է� >>>");
	scanf_s("%d", &num2);
	printf("\n���ϱ� : %d", num1+num2);
	printf("\n���� : %d", num1 - num2);
	printf("\n���ϱ� : %d", num1 * num2);
	printf("\n������ : %.1f", num1 / (float)num2);
	printf("\n���������ϱ� : %d", num1 % num2);
}