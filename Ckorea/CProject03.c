#include <stdio.h>

void main3() {

	// 메모리 (RAM) : 컴퓨터가 정보를 저장하는 공간
	/*
	bit < byte < KByte < MByte < GByte < TBybe
	정보를 저장할 수 있는 최소단위 : bit
	1bit : 0 또는 1(한글자)
	2bit : 00, 01, 10, 11 중 하나를 저장할 수 있음


	==자료형==
	char : 1byte(-128~127)						:한글자(문자)
	short : 2byte(-3만2천~+3만2천)
	int : 4byte(-21억~21억)						:소수점없는 숫자(정수)
	long long : 8byte
	float : 4byte										:소수점있는 숫자(실수)
	double : 8byte

	==변수==
	변수 : 데이터를 저장할 수 있는 저장공간(프로그래밍) , 변하는수(수학)
	C언어 : 옛날 컴퓨터가 아주 성능이 나쁘고 용량이 작을때 만들어진 언어

	*/

	//자료형 저장공간의 이름 =값;
	char var1 = 'a';												//1byte 공간에 a라는 문자를 저장
	int var2 = 3;													//4byte 공간에 3이라는 숫자를 저장
	double var3 = 3.14;										//8byte 공간에 3.14라는 숫자를 저장
	char var4[256] = "안녕하세요 반갑습니다.";			//1byte 공간에 256개 연결
	printf("숫자는 %d!\n", var2);
	printf("문자는 %c!\n", var1);
	printf("숫자는 %f!\n", var3);
	printf("문자열은 %s!\n", var4);
	//변수 : 저장공간
	//자료형 변수명;
	int num;														//변수 선언(생성)
	num = 5;														//대입
	num = 8;														//대입
	num = 1;
	printf("%d", num);
}