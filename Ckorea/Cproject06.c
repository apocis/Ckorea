#include <stdio.h>		//std : standard�� ���Ӹ� , io : input & output�� ���Ӹ�

void main6() {
	//���� == ���
	//������ == ����� ���� ��ȣ

	//+,-,*,/
	//���ϱ� : +
	//���� : -
	//���ϱ� : *
	//������ : /

	int num1, num2;						//���� 2�� ����(����)
	num1 = 1, num2 = 2;				//����
	num1 = num2;						//���ʿ� �ִ� num1�̶�� �������(����)�� num2�� ���� �־��
	num1 = num1;						//������ ���� , �������� ��

	num1 = 1;
	num2 = 2;

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float dlv = (float)num1 / num2;

	int ampersand = num1 % num2;		//num1�� num2�� ���� ������

	printf("%d\n",sum);
	printf("%d\n",sub);
	printf("%d\n",mul);
	printf("%.1f\n",dlv);
	printf("%d\n",ampersand);
	

}
