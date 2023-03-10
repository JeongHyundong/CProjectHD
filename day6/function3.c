#include <stdio.h>

// 정수 2개를 전달 받아 더 큰 정수를 반환
int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}



int main() {
	
	int result;          //결과를 저장할 변수

	result = getBigger(3, 5);     //3과 5를 비교
	printf("첫번째 결과 : %d\n", result);

	result = getBigger(8, 2);     //8과 2를 비교
	printf("두번째 결과 : %d\n", result);

	result = getBigger(4, 4);     //4과 4를 비교
	printf("세번째 결과 : %d\n", result);














	return 0;
}