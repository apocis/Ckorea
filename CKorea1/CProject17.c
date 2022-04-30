#include <stdio.h>

void main17() {
	//int num =15;
	//if (num < 10){
	//	printf("한 자리 수\n");
	//}
	//else if (num < 100) {
	//	printf("두 자리 수\n");
	//}
	//else if (num < 1000) {
	//	printf("세 자리 수\n");
	//}
	//else {
	//	printf("그외\n");
	//}

	//int age;
	//printf("나이를 입력하세요 >>\n");
	//scanf_s("%d", &age);
	//if (age > 19) {
	//	printf("성인");
	//}
	//else if (age > 13) {
	//	printf("청소년");
	//}
	//else {
	//	printf("어린이");
	//}
	int year;
	printf("몇년도인지 입력 >>>\n");
	scanf_s("%d" ,& year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}