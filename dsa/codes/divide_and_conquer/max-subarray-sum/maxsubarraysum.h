#ifndef MAXSUBARRAYSUM_H
#define MAXSUBARRAYSUM_H
#include <limits>
typedef unsigned int uint;

const int INF = std::numeric_limits<int>::max();
const int NEGINF = std::numeric_limits<int>::min();


typedef struct {
    int leftmax;
    int rightmax;
    int sum;
} subarray_parameters_t;

subarray_parameters_t findMaxCrossingSubarray(int *arr, int low, int mid, int high);

subarray_parameters_t findMaxSubarray(int *arr, int low, int high); 

subarray_parameters_t bruteMaxSubarray(int *arr, int n);
#endif
