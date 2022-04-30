#include <stdio.h>

void main15() {
	
		/*if (조건) {
		조건이 맞으면 수행할 문장;
		}*/
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다.\n");
	}
	if (age >= 0 && age < 20) {
		printf("미성년자 입니다.\n");
	}
	if (age < 0 || age > 200) {
		printf("?\n");
	}
}