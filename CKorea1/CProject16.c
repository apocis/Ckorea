#include <stdio.h>

void main16() {
	/*
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		// 조건이 맞으면 수행
		printf("성인입니다.\n");
	}
	else{
		// 조건이 틀리면 수행
		printf("미성년자 입니다.\n");
	}
	*/

	//int value = 15;
	//if (value > 10) {
	//	printf("value는 10보다 큰 수 입니다.\n");
	//}
	//else {
	//	printf("value는 10보다 작은 수 입니다\n");
	//}
	//int age = 21;
	//if (age >= 20) {
	//	printf("성인입니다.\n");
	//}
	//else {
	//	printf("미성년자 입니다.\n");
	//}

	//int qlalfqjsgh;
	//printf("비밀번호 4자리를 입력하세요 >> \n");
	//scanf_s("%d", &qlalfqjsgh);
	//if (qlalfqjsgh == 8452) {
	//	printf("통과");
	//}
	//else {
	//	printf("불통");
	//}

	int aa = 0;
	printf("성적을 입력하세요 >>> \n");
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