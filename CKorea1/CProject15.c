#include <stdio.h>

void main15() {
	
		/*if (����) {
		������ ������ ������ ����;
		}*/
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	if (age >= 0 && age < 20) {
		printf("�̼����� �Դϴ�.\n");
	}
	if (age < 0 || age > 200) {
		printf("?\n");
	}
}