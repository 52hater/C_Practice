#include <stdio.h>

/* ����ڷκ��� �� ������ �Է� �޾� ������ ���.
   ����� �Է��� ����Ǵ� ���� �ϳ���
   ���� �����ϴ� ���� �ϳ��� ����� ����*/

   // accumulation : ����

int main(void) {

	int input = 0;
	int acc = 0;

	// for(�ʱ��; ���ǽ�; ������) {}
	// scanf_s()�� �ݺ��� �ۿ� ������ �ݺ����� ������� �ѹ��� ������� > �ݺ��� �ȿ� �־����
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &input);
		acc += input;
	}

	printf("total result : %d\n", acc);

	return 0;
}