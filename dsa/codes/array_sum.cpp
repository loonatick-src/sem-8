/* 1. Given an array 'a' of n elements. Find the maximum subarray sum
 * i.e. max(a[i] + a[i+1] + a[i+2] ... + a[j]) where 1 <= i, j <= n 
 * and i <= j. Try to do this in O(nlogn) using recursion. 
 * Note that this can be done in O(n) too. */

#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned int uint;
using namespace std;


int main() {
	vector<int> arr;
	int a;
	uint n; cin >> n;
	for (uint i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}

	return 0;
}


