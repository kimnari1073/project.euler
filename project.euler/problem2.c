#include <stdio.h>
#define A 4000000
int main() {
	/*
	Even Fibonacci numbers

	Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
	피보나치 수열에서 4백만 이하이면서 짝수인 항의 합

	피보나치(Fibonacci) 수열의 각 항은 바로 앞의 항 두 개를 더한 것입니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.
	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	4백만 이하의 짝수 값을 갖는 모든 피보나치 항을 더하면 얼마가 됩니까?
	*/
	int a = 1;
	int b = 2;
	int sum = 0;
	for (int i = 3;a <= A;i=a+b) {
		if (a % 2 == 0)
			sum += a;
		a = b;
		b = i;
	}
	printf("%d", sum);
}