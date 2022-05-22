#include <stdio.h>
#include "CProject29.h"

// 복습 : 함수, 배열, 포인터

// 함수

/*
// 함수 만드는 방법 (함수 정의)
자료형 함수이름(변수1선언,변수2선언){

	return 자료형에맞는값;
}
*/



int main29() {
	// 함수 사용
	Mul(3, 5);
	
	
	num = Mul(3, 5);
	printf("곱하기 결과는 : %d\n", num);
	Print();
	Print();
	Print();
	Print();

	
	div_result = Div(10.0f, 5.0f);
	printf("나누기1의 결과는 : %.2f \n", div_result);
	div_result = Div(5, 0);
	printf("나누기2의 결과는 : %.2f \n", div_result);

	int cal_result = Calc(3);

	return 0;
}

// 숫자2개를 전달 받아서 곱하기 해주는 함수
int Mul(int num1, int num2) {
	int result = num1 * num2;


	return result;
}

void Print() {
	printf("Print함수를 사용하셨습니다.\n");

}

// 실수 2개를 전달을 받아서 첫번째 숫자/ 두번째 숫자를 계산하고 돌려줌(리턴)
float Div(float num1, float num2) {
	
	float result = 0.0f;
	if (num2 != 0.0f) {
		result = num1 / num2;
	}
	else {
		printf("0으로는 나눌수 없습니다.\n");
	}

	return result;
}

int Calc(int num)
{
	int result = 0;
	printf("%d\n", num * num + num * 2 + 11);

	return result;
}
