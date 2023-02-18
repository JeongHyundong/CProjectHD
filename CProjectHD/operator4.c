#include <stdio.h>

int main() {
	int kor = 50, eng = 45, math = 60;
	int sum = 0;
	sum = kor + eng + math;
	double avg1 = 0.0;
	avg1 = (double)sum / 3;

	// 합계와 평균을 구하라

	printf("합계 : %d\n", kor + eng + math);
	printf("평균 : %.3lf", avg1);
	



	return 0;
}
