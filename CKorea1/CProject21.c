#include <stdio.h>

void main21() {
	//int pass;
	//
	//printf("비밀번호를 입력하세요\n");
	//
	//for (int i = 0; i <= 2; i++) {
	//	scanf_s("%d", &pass);
	//	if (pass == 995854) {
	//		printf("비밀번호가 일치합니다!\n");
	//		break;
	//	}
	//	else {
	//		printf("비밀번호가 맞지 않습니다.\n");
	//	}
	//	if (i == 2) {
	//		printf("입력 횟수를 초과햇습니다");
	//	}
	//}
	
	//for (int i = 0; i <= 100; i++) {
	//	if (i %2 != 0) {
	//		printf("%d\n", i);
	//	}
	//	
	//}

	for (int i = 1; i <= 100; i++) {
		if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("짝\n");
			continue;
		}
		else {
			printf("%d\n", i);
		}
	}
}