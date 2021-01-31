#include <stdio.h>

int pow(float x, int n) {
	if (n == 0)
		return 1;
	else {
		n &= 1;
		if (n) {
			float y = pow(x, (--n)>>1);
			return x*y*y;
		} else {
			float y = pow(x, n>>1);
			return y*y;
		}
	}
}

