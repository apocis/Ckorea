#include <stdio.h>

void myPow(int *num) {
	*num = (*num) * (*num);
	
}

int main32() {
	// ������ ����1���� ���� ��
	// ������ ������ ��Ƽ�
	// �����ϴ� �Լ��� �Ѱ� ���
	int num = 3;
	int *a = &num;
	myPow(a);
	//������
	printf("%d",*a);

	return 0;
}

// �����Ҷ� * : ������ ���� ����
// ����Ҷ� * : ������
// & : �ּ��� ��
