#include <stdio.h>

void main21() {
	//int pass;
	//
	//printf("��й�ȣ�� �Է��ϼ���\n");
	//
	//for (int i = 0; i <= 2; i++) {
	//	scanf_s("%d", &pass);
	//	if (pass == 995854) {
	//		printf("��й�ȣ�� ��ġ�մϴ�!\n");
	//		break;
	//	}
	//	else {
	//		printf("��й�ȣ�� ���� �ʽ��ϴ�.\n");
	//	}
	//	if (i == 2) {
	//		printf("�Է� Ƚ���� �ʰ��޽��ϴ�");
	//	}
	//}
	
	//for (int i = 0; i <= 100; i++) {
	//	if (i %2 != 0) {
	//		printf("%d\n", i);
	//	}
	//	
	//}

	for (int i = 1; i <= 100; i++) {
		if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("¦\n");
			continue;
		}
		else {
			printf("%d\n", i);
		}
	}
}