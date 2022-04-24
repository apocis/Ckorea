#include <stdio.h>

void main11() {
	//비교연산자	(1 : 맞다 , 0 : 아니다)
	int num1, num2;

	scanf_s("%d",&num1);
	scanf_s("%d",&num2);
	
	//1. 같다				==
	printf("같다 :%d\n", num1 == num2);
	//2. 다르다				!=
	printf("다르다 :%d\n", num1 != num2);
	//3. 작다				<
	printf("작다 : %d\n", num1 < num2);
	//4. 작거나같다		<=
	printf("작거나 같다 : %d\n", num1 <= num2);
	//5. 크다				>
	printf("크다 : %d\n", num1 >= num2);
	//6. 크거나같다		>=
	printf("크거나 같다 : %d\n", num1 >= num2);

	//관계연산자 (&& : and , || : or , ! : not)
	int num3 = 0;
	printf("%d\n", num1 == num2 && num1 == num3);		//and : &&
	printf("%d\n", num1 == num2 || num1 == num3);			//or : ||
	printf("%d\n", !(num1 > num2));									//not : !	 (반대의결과)
}