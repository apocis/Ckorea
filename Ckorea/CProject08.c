#include <stdio.h>

void main8() {
	int num1, num2;
	num1 = 3;
	num2 = 4;
	
	num1 += 3;			//num1 = num1 + 3;
	printf("%d\n", num1);

	num1 -= 3;
	printf("%d\n", num1);

	//num2 += 1;							//num2 = num2 + 1;
	num2++;
	printf("%d\n", num2);
	
	num2--;			//num2 -= 1;		//num2 = num2 -1;
	printf("%d\n", num2);

}