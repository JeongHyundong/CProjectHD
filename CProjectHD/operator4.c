#include <stdio.h>

int main() {
	int kor = 50, eng = 45, math = 60;
	int sum = 0;
	sum = kor + eng + math;
	double avg1 = 0.0;
	avg1 = (double)sum / 3;

	// �հ�� ����� ���϶�

	printf("�հ� : %d\n", kor + eng + math);
	printf("��� : %.3lf", avg1);
	



	return 0;
}
