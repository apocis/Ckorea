#include <stdio.h>

void main17() {
	//int num =15;
	//if (num < 10){
	//	printf("�� �ڸ� ��\n");
	//}
	//else if (num < 100) {
	//	printf("�� �ڸ� ��\n");
	//}
	//else if (num < 1000) {
	//	printf("�� �ڸ� ��\n");
	//}
	//else {
	//	printf("�׿�\n");
	//}

	//int age;
	//printf("���̸� �Է��ϼ��� >>\n");
	//scanf_s("%d", &age);
	//if (age > 19) {
	//	printf("����");
	//}
	//else if (age > 13) {
	//	printf("û�ҳ�");
	//}
	//else {
	//	printf("���");
	//}
	int year;
	printf("��⵵���� �Է� >>>\n");
	scanf_s("%d" ,& year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
}