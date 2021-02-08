#include <iostream>
#include "maxsubarraysum.h"
#include "subarrayIO.h"

int main() {
    int arr[3] = {-1, 2, 3};
    subarray_parameters_t rv = findMaxSubarray(arr, 0, 3);
    printSubarrayParameters(rv);
#ifdef BRUTE
    rv = bruteMaxSubarray(arr, 3);
    printSubarrayParameters(rv);        
#endif
#ifdef NYEGGA
    int arrn[3] = {-5, -1, -2};
    rv = findMaxSubarray(arrn, 0, 3);
    printSubarrayParameters(rv);
#endif
    return 0;
}
