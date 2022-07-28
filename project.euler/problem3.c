/*
Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

���� ū ���μ� ���ϱ�

� ���� �Ҽ��� �����θ� ��Ÿ���� ���� ���μ����ض� �ϰ�, �� �Ҽ����� �� ���� ���μ���� �մϴ�.
���� ��� 13195�� ���μ��� 5, 7, 13, 29 �Դϴ�.
600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���.
*/
#include <stdio.h>

int main() {
	long long int num = 600851475143;
	int max = 0;//���μ��� �迭�� �Է¹���
	int i = 2;

	do {
		if (num % i == 0) {
			max = i; //���� ū ���μ�
			num /= i;
			continue;
		}
		i ++;
	} while (i <= num);
	printf("%d", max);
}