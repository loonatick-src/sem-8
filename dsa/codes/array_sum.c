/* 1. Given an array 'a' of n elements. Find the maximum subarray sum
 * i.e. max(a[i] + a[i+1] + a[i+2] ... + a[j]) where 1 <= i, j <= n 
 * and i <= j. Try to do this in O(nlogn) using recursion. 
 * Note that this can be done in O(n) too. */

#include <stdio.h>
#include <stdlib.h>

void print_arr(int* arr, int n); 
int subarray_sum(int *arr, int l, int h);


int main(int argc, char** argv) {
	int n;
	scanf("%u", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", arr+i);
	}
	
	printf("%d\n", subarray_sum(arr, 0, n));
	

	return 0;
}

int subarray_sum(int *arr, int l, int h) {
	int n = h - l;  // number of keys
	if (n == 1) 
		return arr[l];
	int s1 = subarray_sum(arr, l, h/2);
	int s2 = subarray_sum(arr, h/2, h);

	if ((s1*s2) < 0) {
		return ((s1 > 0) * s1) + ((s2 > 0) * s2);
	} else if (s1*s2 == 0) {
		int key = ((~s1)&(~s2)) + 1;
		return (key<0)*key;
	} else if (s1 < 0){
		return (s1 > s2)*s1 + (s2 > s1)*s2;
	} else {
		return s1 + s2;
	}
}

void print_arr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
	putc('\n', stdout);
}

