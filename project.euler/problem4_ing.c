/*
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 �� 99.
Find the largest palindrome made from the product of two 3-digit numbers.

���ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī��

�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.
�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�?
*/

#include <stdio.h>
//�� �ڸ� ���� ���� ���� �� �ִ� ���� �ټ� �ڸ� �� ~ ���� �ڸ� ���̴�.
int main() {

	int num=0, tem=0;
	int arr[6];
	int count=0;
	for (int a = 100; a <= 999; a++) {
		for (int b = 100; b <= 999; b++) {
			tem = a * b;
			for (count = 0; 0 < tem; count++) {
				arr[count] = tem % 10;
				tem /= 10;
			}
			if (count % 2 == 1) {
				if (arr[0] == arr[4] && arr[1] == arr[3]) {
					tem = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000 + arr[4] * 10000;
					if (num < tem)
						num = tem;
				}
			}
			else {
				if (arr[0] == arr[5] && arr[1] == arr[4] && arr[2] == arr[3]) {
					tem = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000 + arr[4] * 10000 + arr[5] * 100000;
					if (num < tem)
						num = tem;
					printf("%d\n", num);
				}
			}
		}
	}
	printf("%d", num);


}