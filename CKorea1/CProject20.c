#include <stdio.h>

void main20() {
	// ��� : ���ǹ�, �ݺ���
	// �ݺ�Ƚ���� �����ϱ� ���ؼ� �÷��װ� �ʿ�
	int i = 0;
	//while (i < 5) {
	//	printf("Hello World\n");
	//	i++;				// i = i +1;
	//}
	//int sum = 0;
	//int num = 0;
	//printf("��ĥ���ڸ� �Է��ϼ���>>>");
	//scanf_s("%d", &num);

	//while (i  <= num) {
	//	sum += i;
	//	i++;
	//	
	//}
	//for (int j = 1; j <= num; j++) {
	//	sum += j;

	//}
	//printf("1~%d�� �հ�� %d",num, sum);
	for (int i = 0; i < 10; i++) {
		if (i %2==0) {
			continue;
		}
		printf("%d�� Hello World\n",i);
	}
// break; : �ݺ����� ����
// coutinue : 1ȸ�� ���, �ؿ� �ִ� ������ �������� �ʰ� ���� �˻��ϴ°����� �̵�

}
