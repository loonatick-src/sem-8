/* the tower of Hanoi/Brahma
 * For n number of disks,
 * print the move sequence
 * of the solution */

#ifndef HANOI_H
#define HANOI_H

void hanoi(int n, char a, char b, char c) {
	if (n == 1)
		printf("move from %c to %c\n", a, b);
	else {
		hanoi(n-1, a, c, b);
		printf("move from %c to %c\n", a, b);
		hanoi(n-1, c, b, a);
	}
}


