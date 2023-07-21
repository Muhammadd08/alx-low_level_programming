#include <stdio.h>
/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main() {
	long long n = 612852475143;
	long long i = 2;

	while (i * i <= n) {
		if (n % i == 0) {
			n /= i;
		}
		else {
			i++;
		}
	}
	printf("%lld\n", n);
	return 0;
}

