#include <stdio.h>

/* �������� : ��Ʈ������Ʈ > ex) �ڵ����� ȣ��Ǵ� �����Լ�
   printf(), scanf_s() >> CRL (C-Runtime-Library)
   ���̺귯�� > �Լ��� Ŭ������ ��Ʈ�� ��� �ܶ� ��Ƴ��� ��
   ���࿡ ����¿� ���õ� ��Ʈ�� ���̺귯���� �ִ�?
   >> ǥ������� ���̺귯����� �θ��� SDK����� �θ�(����Ʈ���� �𺧷�����Ʈ Ŷ)
   SDK�� � ����Ʈ��� ����µ� �ʿ��� ���̺귯�� > �������ڰ�����
   �� SDK�ӿ��� ������ ���̺귯���� �ְ� �� �� �ӿ��� ������ �Լ����� �ִµ�
   �� �� �Լ��� �� API(���ø����̼� ���α׷��� �������̽�)��� ��.
   SDK��� �ϴ°� ���� �׷� API��, �� �Լ����� ����ü�̰�, 
   ����� ���̺귯����� �׷��ٰ� ��¿���� SDK��� �׷��ٰ�
   ��ư �׷� ������ �ᱹ ����ϴ°� �Լ�
   
   ȣ���� �Լ� = ȣ���� = �ݷ� = caller
   ��ȣ�����Լ� = �ݸ� = callee
   ����׿��� �ݷ� �ݸ� �� �����ϱ� �ܿ���

   �Լ��� �̸��� �迭�� �̸�ó�� �ּ��̴�.
   (�迭�� �̸�(�ĺ���)�� 0������� �ּ���)
   ������ �迭�� �����͸� ���夷�ϱ� ���Ѱǵ� �Լ��� �̸��� �ּұ�� �ѵ� �Լ��� �ּ� ���󰡸�
   ��� Ƣ���. �� �����ڵ尡 Ƣ��´� (C���� ����Ƽ�� ���ϱ�)
   �׷��ϱ� �Լ��� �ּҶ�� ���� ���� ���� �����ڵ尡 ����� �޸��� �ּҴ�
   �׷��ٸ�? > �ٲٸ� �ȵ��� > Read Only
   ȣ���� �Լ����� ������� nResult = Add(3, 4);
   ���⼭ ()�� �Լ�ȣ�� ��������.
   Add(3, 4);
   �ּ�(3, 4); > �� ���� ��ȣ�� �ƴ϶� ������. �Լ�ȣ�⵵ ������.
   
   printf�� �Լ��� ȣ���ؼ� %d�� �� �Լ��� ���ϰ���(�ӽð����) �޾Ƽ� ����� �� ����
   ���ϰ�*2 �����͵� ��������

   printf("max: %d\n", GetMax(1, 2, 3));
	printf("max: %d\n", GetMax(1, 2, 3) * 2);
	�̷������� �� �� �ְ�

	�� ������ �ʰ� �ڵ尡 �� ��������
	printf("max: %d\n", nResult = GetMax(1, 2, 3));
	�̷��� �� ���� �ֱ� ��

	���ε� binding = ȣ�����Լ��� ��ȣ���� �Լ��� ���踦 �����ϴ� ��. �� �Լ��� ����ƴ�, ������, ���谡 �����ƴ�.

	���ε���
	������Ÿ��, ��ũŸ��(���ߴܰ�) ���� ���� �ϸ� ����ƽ ���ε�

	���ε���
	��Ÿ�ӿ� �ϸ� ���̳��� ���ε�, ã�Ƽ� ������

	���� ������ �����ڵ�� �Լ��� ���� (DRY��Ģ)

	1. KISS - Keep It Simple Stupid
	- �ǵ��� �����ϰ� �ܼ��ϰ�
	2. YAGNI - You Ain't Gonna need it
	- �ʿ��� �۾��� �ض� - ����� ������� ������ Ȯ�强�� �����ؼ� �̸� �۾��س��� ����
	3. DRY - Do not Repeat Yourself
	- �ݺ����� ���� > �ҽ��ڵ忡�� ������ �ڵ� �ݺ�X �ݺ��Ǵ� �ڵ�� ���� ���� ���� ������� Ŀ�� ����

	�ѹ������� �����ϴٰ� ������ ���Եȴ�?
	�̰� �Լ�ȭ ���ѳ�����
	���߿� ���ٶ����� �߱����� �Ƕ˾Ƚη���

	�ٵ� ���������� �Լ������Ģ��
	"UI�� ����� �ݵ�� �и�"**********

	�׷��� ���� ������ �����ڵ�� �Լ��� �����س���,
	UI�� ����� �ݵ�� �и����Ѷ�. ����� �Լ��ȿ� UI�� ��������

	������� ���丮�� �Լ��� �����س��´ٸ� scan_f�� ���� �� 1~9������ ���� �Է��Ͻÿ� �޽��� �߰� �׷��� �־�θ� �ȵǰ��� ����� �����س��� �Լ��� ����� �ִٸ�

	������ if 1~9�ȿ�
	for( ~~~ *= ~~~ �̷��Ÿ� �־�־��ϴ°���
	�� �� ���� ������ 0�̸� ������ �̷��� �Լ����ο� ���۷��� �� ������ ���־�� �Ǵ°���

	�����Լ����� UI�� ȣ����, getFactorial() �ʿ��� ��ɴ�� �׷�������

	��ȿ���˻� > ������� ������ �Է��ؾ��ϴµ� 0~100 ���� �������� ������� �׷���

	�Ʒ� �ڵ�� UI/��� �и� ����
   
   */


// �� UI ��翡�� ��ĵ������ ������ �Ű������� �޾Ƽ�
int GetResult(void) {
	int nResult = 0;
	printf("����(1~100)�Է� : ");
	scanf_s("%d", &nResult);
		return nResult;
}
// �̷������� UI / ��� �и�
char GetGrade(int nScore) {
	if (nScore >= 90) return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';
	return 'F';
}

// ���� �װŸ� ������ ���� �����Լ��� �̷��� �Ǵ°���
// ������ �Ѱ��ָ� // �װ� ���� ������ ����ؼ� ������ ��ȯ�Ѵ� // �װ� �޾Ƽ� ����Ʈ���ش�(�ݷ�����)
// �װͱ��� ĸ��ȭ
int main(void) {
	int nResult = 0;

	nResult = GetResult();
	printf("����� ������ %c(%d)�Դϴ�.\n",
		GetGrade(nResult), nResult);
	return 0;
}
