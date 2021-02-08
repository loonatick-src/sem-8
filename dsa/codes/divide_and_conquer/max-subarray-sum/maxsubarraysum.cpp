#include <limits>
#include "maxsubarraysum.h"


subarray_parameters_t findMaxCrossingSubarray(int *arr, int low,
        int mid, int high) {
    int leftsum = NEGINF;
    int sum = 0;
    int maxleft;
    for (int i = mid-1; i >= low; i--) {
        sum = sum + arr[i];
        if (sum > leftsum) {
            leftsum = sum;
            maxleft = i;
        }
    }

    int rightsum = NEGINF;
    sum = 0;
    int maxright;
    for (int j = mid; j < high; j++) {
        sum = sum + arr[j];
        if (sum > rightsum) {
            rightsum = sum;
            maxright = j;
        }
    }
    subarray_parameters_t rv = {maxleft, maxright, leftsum + rightsum};
    return rv;
}


subarray_parameters_t findMaxSubarray(int *arr, int low, int high) {
    if (high == low + 1)
        return (subarray_parameters_t) {low, high, arr[low]};
    else {
        //uint ulow = (uint) low;  // assuming that low >= 0, high >= 0
        //uint uhigh = (uint) high;
        //int mid = (int) ((ulow & uhigh) + ((ulow ^ uhigh) >> 1));
        int mid = low + (high-low)/2;

        subarray_parameters_t leftpar, rightpar, crosspar;
        leftpar = findMaxSubarray(arr, low, mid);
        rightpar = findMaxSubarray(arr, mid, high);
        crosspar = findMaxCrossingSubarray(arr, low, mid, high);

        if (leftpar.sum >= rightpar.sum && leftpar.sum >= crosspar.sum) {
            return leftpar;
        } else if (rightpar.sum >= leftpar.sum && rightpar.sum >= crosspar.sum) {
            return rightpar;
        } else {
            return crosspar;
        }
    }
}


subarray_parameters_t bruteMaxSubarray(int *arr, int n) {
    int maxsum = NEGINF;
    int maxlow, maxhigh;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > maxsum) {
                maxsum = sum;
                maxlow = i;
                maxhigh = j;
            }
        }
        sum = 0;
    }

    return (subarray_parameters_t) {maxlow, maxhigh, maxsum};
}
