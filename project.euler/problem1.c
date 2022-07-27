#include <stdio.h>
#define A 1000
int main() {
/*
"Multiples of 3 or 5"

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

"1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더하면?"

10보다 작은 자연수 중에서 3 또는 5의 배수는 3, 5, 6, 9 이고, 이것을 모두 더하면 23입니다.
1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더하면 얼마일까요?
*/
	int sum = 0;
	for (int i = A-1;i > 0;i--) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
}
