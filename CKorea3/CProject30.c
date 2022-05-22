#include <stdio.h>

int A(int num) {
	num++;		//num = num  +1;		num+=1;

	return 0;
}

int B(int *num) {
	(*num)++;		//포인터
	return 0;
}

int main30() {
	int num = 3;				//변수 선언
	num = 3;					//값 대입
	num;							//값 사용


	int* pNum;				//포인터 변수 선언
		pNum= &num;		//주소 참조(주소 대입)
	*pNum;						//역참조(값 사용)

	printf("변수의 주소 : %p\n", &num);
	printf("변수의 값 : %d\n", num);

	printf("포인터 변수의 값 : %p\n", pNum);
	printf("역참조 : %d\n", *pNum);
	return 0;
}

// 1. 변수 선언(변수를 만든다)
// 2. 포인터 변수를 만들고 변수의 주소를 담는다.
// 3. 사용할때는 역참조를 사용한다.
// 포인터 변수를 선언하려면 선언시(자료형을 적을 때)에 변수 앞에 * 를 적는다
// 역참조를 하려면 변수앞에 *을 적는다. (변수 사용시에 앞에*적음)
// 변수의 주소는 변수앞에 &를 적으면된다