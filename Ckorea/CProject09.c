#include <stdio.h>

void main9() {
	//��� printf
	//�Է� scanf_s

	int num1;
	float num2;
	char c;
	char cc[256];

	printf("���ڸ� �Է��ϼ���>>");
	scanf_s("%d", &num1);
	printf("num1�� �� ���� %d\n", num1);

	printf("�Ǽ��� �Է��ϼ���>>");
	scanf_s("%f", &num2);
	printf("num2�� �� ���� %f\n", num2);

	printf("���ڸ� �Է��ϼ���>>");
	getchar();
	scanf_s("%c", &c, sizeof(c));
	printf("���ڿ� �� ���� %c\n",c);

	printf("���ڿ��� �Է��ϼ���>>");
	scanf_s("%s", &cc, sizeof(cc));
	printf("���ڿ��� �� ���� %s\n", cc);
	

}