#include <stdio.h>

typedef unsigned int uint;

uint virahanka(uint height);

int main(void) {
	uint height;
	scanf("%u", &height);
	printf("%u\n", virahanka(height));
	return 0;
}
