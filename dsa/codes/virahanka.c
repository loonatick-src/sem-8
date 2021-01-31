#include <stdio.h>

typedef unsigned uint;

int b1[2] = {1, 2};
uint virahanka(uint height) {
	if (height <= 2) {
		return height - (height >> 1);
	} else {
		return 1 + virahanka(height - 1) + virahanka(height - 2);
	}
}

