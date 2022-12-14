/*
Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

가장 큰 소인수 구하기

어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.
예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.
600851475143의 소인수 중에서 가장 큰 수를 구하세요.
*/
#include <stdio.h>

int main() {
	long long int num = 600851475143;
	int max = 0;//소인수를 배열로 입력받음
	int i = 2;

	do {
		if (num % i == 0) {
			max = i; //가장 큰 소인수
			num /= i;
			continue;
		}
		i ++;
	} while (i <= num);
	printf("%d", max);
}