#include <stdio.h>

void main7() {
	//±¹¾î = 84 ,  ¼öÇÐ = 78, ¿µ¾î = 88
	//ÃÑÁ¡, Æò±Õ
	//°á°ú¿¹½Ã : ÃÑÁ¡Àº OOOÁ¡ÀÌ°í, Æò±ÕÀº OOOÁ¡ÀÌ´Ù.

	int a = 84;
	int b = 78;
	int c = 88;

	int d = a + b + c;
	float e = (float)d / 3;
	printf("ÃÑÁ¡Àº %dÁ¡ÀÌ°í, Æò±ÕÀº %.2fÁ¡ÀÌ´Ù", d, e);

	
}