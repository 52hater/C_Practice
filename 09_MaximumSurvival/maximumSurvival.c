#include <stdio.h>

/* ����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�.
   ������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ� scanf_s() �Լ��� �� ���� �� ���� �Է¹ް�
   ���������� �ִ��� ��� �����ϴ� ������ �ۼ�.*/
   // ***������ �߿��� ����***
   // ��� override�ؼ� �ִ��� ����ǵ��� ����
int main(void) {

	int input = 0, max = 0;
	scanf_s("%d", &input);

	max = input; // ���� ����� ������ �ٷ� ����ְ�

	scanf_s("%d", &input);
	max = (max > input) ? max : input;

	scanf_s("%d", &input);
	max = (max > input) ? max : input;

	printf("max : %d\n", max);

	return 0;
}