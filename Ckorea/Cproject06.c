#include <stdio.h>		//std : standard의 줄임말 , io : input & output의 줄임말

void main6() {
	//연산 == 계산
	//연산자 == 계산을 위한 기호

	//+,-,*,/
	//더하기 : +
	//빼기 : -
	//곱하기 : *
	//나누기 : /

	int num1, num2;						//변수 2개 생성(선언)
	num1 = 1, num2 = 2;				//대입
	num1 = num2;						//왼쪽에 있는 num1이라는 저장공간(변수)에 num2의 값을 넣어라
	num1 = num1;						//왼쪽은 공간 , 오른쪽은 값

	num1 = 1;
	num2 = 2;

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float dlv = (float)num1 / num2;

	int ampersand = num1 % num2;		//num1을 num2로 나눈 나머지

	printf("%d\n",sum);
	printf("%d\n",sub);
	printf("%d\n",mul);
	printf("%.1f\n",dlv);
	printf("%d\n",ampersand);
	

}
