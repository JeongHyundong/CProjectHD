#include <stdio.h>

int main4() {
	// �ּ� : �� ���� �޸�ó��
	/*
	�ۼ��� : ������ 
	�ۼ���¥ : 2023-02-18
	��� : printf �� ���ڿ� ���
    */
	// �̸�, �⵵, ��, �� f   ==> ����
	// ���ڿ�[]���� : �̸�              %s
	// �������� : �⵵, ��, ��          %d
	// ���ں��� : f                     %c

	char name[] = "������";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'Z';

	printf("�ۼ���: %s\n", name);
	printf("�ۼ���¥: %d-%d-%d\n", year, month, day);
	printf("���ں���: %c", word);




	return 0;
}
