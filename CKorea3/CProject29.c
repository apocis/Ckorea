#include <stdio.h>
#include "CProject29.h"

// ���� : �Լ�, �迭, ������

// �Լ�

/*
// �Լ� ����� ��� (�Լ� ����)
�ڷ��� �Լ��̸�(����1����,����2����){

	return �ڷ������´°�;
}
*/



int main29() {
	// �Լ� ���
	Mul(3, 5);
	
	
	num = Mul(3, 5);
	printf("���ϱ� ����� : %d\n", num);
	Print();
	Print();
	Print();
	Print();

	
	div_result = Div(10.0f, 5.0f);
	printf("������1�� ����� : %.2f \n", div_result);
	div_result = Div(5, 0);
	printf("������2�� ����� : %.2f \n", div_result);

	int cal_result = Calc(3);

	return 0;
}

// ����2���� ���� �޾Ƽ� ���ϱ� ���ִ� �Լ�
int Mul(int num1, int num2) {
	int result = num1 * num2;


	return result;
}

void Print() {
	printf("Print�Լ��� ����ϼ̽��ϴ�.\n");

}

// �Ǽ� 2���� ������ �޾Ƽ� ù��° ����/ �ι�° ���ڸ� ����ϰ� ������(����)
float Div(float num1, float num2) {
	
	float result = 0.0f;
	if (num2 != 0.0f) {
		result = num1 / num2;
	}
	else {
		printf("0���δ� ������ �����ϴ�.\n");
	}

	return result;
}

int Calc(int num)
{
	int result = 0;
	printf("%d\n", num * num + num * 2 + 11);

	return result;
}
