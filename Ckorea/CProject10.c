#include <stdio.h>

void main10() {
	//1.
	//국어, 수학,영어 : 입력을 받아서
	//총점 : 
	//평균 :

	//2.
	/*
	<결과 예시>
	숫자1 , 숫자2 :입력받아서
	더하기, 빼기 , 곱하기 ,나누기
	n1 + n2 =5
	n1 - n2 =-2
	n1 * n2 =30
	n1 % n2 =1
	*/
	int a;
	int b;
	int c;
	int n1;
	int n2;
	
	printf("국어 점수를 입력하세요 >>");
	scanf_s("%d", &a);
	printf("수학 점수를 입력하세요 >>");
	scanf_s("%d", &b);
	printf("영어 점수를 입력하세요 >>");
	scanf_s("%d", &c);
	printf("총점 : %d\n", a+b+c);
	printf("평균 : %.2f\n", (a+b+c)/3.0);
	


	printf("첫번째 숫자를 입력하세요>>");
	scanf_s("%d", &n1);
	printf("두번째 숫자를 입력하세요>>");
	scanf_s("%d", &n2);
	printf("n1 + n2 = %d\n", n1 + n2);
	printf("n1 - n2 = %d\n", n1 - n2);
	printf("n1 * n2 = %d\n", n1 * n2);
	printf("n1 / n2 = %f\n", (float)n1 / n2);
	printf("n1 %% n2 = %d", n1 % n2);

}