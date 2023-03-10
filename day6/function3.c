#include <stdio.h>

// 정수 2개를 전달 받아 더 큰 정수를 반환
/*
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
*/
/*
void Cal(int z, int x)   // 전달받고자 하는 만큼 변수를 생성해놓기
{
	printf("%d, %d, %d, %d", z+x, z-x, z*x, z/x);
}

int Sum(int num1, int num2) {
	int sum = 0;
	for (int i = num1+1; i < num2; i++) {
		sum += i;
	}
	printf("\n%d와 %d사이의 총합은 % d\n", num1, num2, sum);
	return sum;

}

int T(int t1, int t2)
{
	printf("키를 입력하세요\n");
	double t2 = (double)t1 / 100;
	return t2;
}


int main() {
	
	int result;          //결과를 저장할 변수

	result = getBigger(3, 5);     //3과 5를 비교
	printf("첫번째 결과 : %d\n", result);

	result = getBigger(8, 2);     //8과 2를 비교
	printf("두번째 결과 : %d\n", result);

	result = getBigger(4, 4);     //4과 4를 비교
	printf("세번째 결과 : %d\n", result);
	
	
	// #1 두개의 정수를 매개 변수로 입력받아 두 정수의 덧셈, 뺄셈, 곱셈, 나눗셈 결과를
	//    모두 출력하는 함수 정의

	Cal(3, 5);

	// #2 두 정수를 매개변수로 받아 두 정수 사이의 모든 숫자의 합을 반환하는 함수 정의

	Sum(5, 9);

	// #4
	int t2 = T;     // 입력O, 반환O
	scanf("키는 : %d", t1);
	printf("M로 환산한 키는 %d", double(t2));








	return 0;
}*/