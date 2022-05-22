#include <stdio.h>

void myPow(int *num) {
	*num = (*num) * (*num);
	
}

int main32() {
	// 정수형 변수1개를 만든 후
	// 포인터 변수에 담아서
	// 제곱하는 함수를 넘겨 사용
	int num = 3;
	int *a = &num;
	myPow(a);
	//역참조
	printf("%d",*a);

	return 0;
}

// 선언할때 * : 포인터 변수 선언
// 사용할때 * : 역참조
// & : 주소의 값
