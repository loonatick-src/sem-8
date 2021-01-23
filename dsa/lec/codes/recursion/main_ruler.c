#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ruler.h"

int main(int argc, char **argv[]) {
	int num_inches, tick_length;
	if (argc < 3) {
		fprintf(stderr, "Usage: ./<binary> num_inches tick_length\n");
		exit(1);
	}

	drawRuler(tick_length, num_inches);

	return 0;
}
