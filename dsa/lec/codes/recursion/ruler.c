#include <stdio.h>
#include <string.h>
#include "ruler.h"

void drawLine(int tick_length, int tick_label) {
	char line[tick_length];
	int i = 0;

	while (i < tick_length)
		line[i++] = '-';
	

	printf("%s", line);
	if (tick_label + 1 != 0) 
		printf(" %d", tick_label);
	putc('\n', stdout);
}

void drawInterval(int center_length) {
	if (center_length > 0){
		drawInterval(center_length-1);
		drawLine(center_length, -1);
		drawInterval(center_length-1);
	}
}

void drawRuler(int num_inches, int major_length) {
	drawLine(major_length, 0);
	for (int j = 1; j < num_inches+1; j++) {
		drawInterval(major_length-1);
		drawLine(major_length, j);
	}
}
