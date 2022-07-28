/*
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

세자리 수를 곱해 만들 수 있는 가장 큰 대칭수

앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.
두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
*/

#include <stdio.h>

int main() {
	int num;

	for (int a = 100; a <= 999; a++) {
		for (int b = 100; b <= 999; b++) {
			num = a * b;
			
		}
	}
}