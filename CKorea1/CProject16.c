#include <stdio.h>

void main16() {
	/*
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		// ������ ������ ����
		printf("�����Դϴ�.\n");
	}
	else{
		// ������ Ʋ���� ����
		printf("�̼����� �Դϴ�.\n");
	}
	*/

	//int value = 15;
	//if (value > 10) {
	//	printf("value�� 10���� ū �� �Դϴ�.\n");
	//}
	//else {
	//	printf("value�� 10���� ���� �� �Դϴ�\n");
	//}
	//int age = 21;
	//if (age >= 20) {
	//	printf("�����Դϴ�.\n");
	//}
	//else {
	//	printf("�̼����� �Դϴ�.\n");
	//}

	//int qlalfqjsgh;
	//printf("��й�ȣ 4�ڸ��� �Է��ϼ��� >> \n");
	//scanf_s("%d", &qlalfqjsgh);
	//if (qlalfqjsgh == 8452) {
	//	printf("���");
	//}
	//else {
	//	printf("����");
	//}

	int aa = 0;
	printf("������ �Է��ϼ��� >>> \n");
	scanf_s("%d", &aa);
	if (aa >= 60) {
		if (aa >= 90) {
			printf("A");
		}
		if (aa < 90 && aa >= 80) {
			printf("B");
		}
		if (aa < 80 && aa >= 70) {
			printf("C");
		}
		if (aa < 70 && aa >= 60) {
			printf("D");
		}
	}
	else {
		printf("F");
	}
	
	
}