#include <stdio.h>

int main7() {
	// #1
	int a = 10;          // ���� a�� 10 ��Ƽ� �����
	int* p = &a;         // �����ͺ��� p�� a�� �ּҸ� ��� �����
	*p = 20;             //�������ؼ� 20�� �����ϱ� a�� 20�� ����
	printf("%d", a);
	*p = 50;             //�������ؼ� 50�� �����ϱ� a�� 50�� ��
	printf("%d", a);

	// #2
	printf("\n");
	// ���� 10�� �����ϴ� int�� ���� number�� ���� �� �ʱ�ȭ�ϰ�
	// number�� ����� �޸� �ּҸ� �����ϴ� ������ ���� pnumber�� �����մϴ�
	// �׸��� printf �Լ��� ȣ���� ���� 10�� ���� number�� �ּҸ� ����غ�����
	// �̶� printf �Լ��� ��� �����ͷδ� ������ ���� pnumber ���� �̿��ϼ���
	
	int number = 10;
	int* pnumber = &number;
	printf("%d\n%p",*pnumber, pnumber);

	// #3 �ڵ� �ϼ��ϱ�
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	// todo : �ڵ带 �ϼ����ּ���
	ptr = &num1;
	printf("%d\n", *ptr);          //5


	// todo : �ڵ带 �ϼ����ּ���
	ptr = &num2;
	printf("%d\n", *ptr);       //8

	// #�ڵ� �ϼ��ϱ�
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d \n", *ptr1, *ptr2);                //100 200
	


	printf("%d %d\n", *ptr1, *ptr2);                //200 100



	return 0;
}
