#include <stdio.h>

void main10() {
	//1.
	//����, ����,���� : �Է��� �޾Ƽ�
	//���� : 
	//��� :

	//2.
	/*
	<��� ����>
	����1 , ����2 :�Է¹޾Ƽ�
	���ϱ�, ���� , ���ϱ� ,������
	n1 + n2 =5
	n1 - n2 =-2
	n1 * n2 =30
	n1 % n2 =1
	*/
	int a;
	int b;
	int c;
	int n1;
	int n2;
	
	printf("���� ������ �Է��ϼ��� >>");
	scanf_s("%d", &a);
	printf("���� ������ �Է��ϼ��� >>");
	scanf_s("%d", &b);
	printf("���� ������ �Է��ϼ��� >>");
	scanf_s("%d", &c);
	printf("���� : %d\n", a+b+c);
	printf("��� : %.2f\n", (a+b+c)/3.0);
	


	printf("ù��° ���ڸ� �Է��ϼ���>>");
	scanf_s("%d", &n1);
	printf("�ι�° ���ڸ� �Է��ϼ���>>");
	scanf_s("%d", &n2);
	printf("n1 + n2 = %d\n", n1 + n2);
	printf("n1 - n2 = %d\n", n1 - n2);
	printf("n1 * n2 = %d\n", n1 * n2);
	printf("n1 / n2 = %f\n", (float)n1 / n2);
	printf("n1 %% n2 = %d", n1 % n2);

}