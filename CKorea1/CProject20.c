#include <stdio.h>

void main20() {
	// 제어문 : 조건문, 반복문
	// 반복횟수를 지정하기 위해선 플래그가 필요
	int i = 0;
	//while (i < 5) {
	//	printf("Hello World\n");
	//	i++;				// i = i +1;
	//}
	//int sum = 0;
	//int num = 0;
	//printf("합칠숫자를 입력하세요>>>");
	//scanf_s("%d", &num);

	//while (i  <= num) {
	//	sum += i;
	//	i++;
	//	
	//}
	//for (int j = 1; j <= num; j++) {
	//	sum += j;

	//}
	//printf("1~%d의 합계는 %d",num, sum);
	for (int i = 0; i < 10; i++) {
		if (i %2==0) {
			continue;
		}
		printf("%d번 Hello World\n",i);
	}
// break; : 반복문을 끝냄
// coutinue : 1회성 취소, 밑에 있는 문장을 실행하지 않고 조건 검사하는곳으로 이동

}
