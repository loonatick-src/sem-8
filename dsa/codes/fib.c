#include <stdio.h>

typedef unsigned int uint;

typedef struct FibonacciPair {
	uint fib1;
	uint fib2;
} fibpair_t;

uint fibonacci(uint k, fibpair_t prev) {
	if (k == 1) {
		return prev.fib2;
	} else if (k == 0) {
		return prev.fib1;
	} else {
		prev.fib2 += prev.fib1;
		prev.fib1 = prev.fib2 - prev.fib1;
		return fibonacci(--k, prev);
	}
}

int main(void) {
	fibpair_t init = {0, 1};
	uint rv = fibonacci(1, init);
	printf("%u\n", rv);
	return 0;
}
		
