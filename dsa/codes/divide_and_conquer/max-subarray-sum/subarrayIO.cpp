#include <iostream>
#include "maxsubarraysum.h"
#include "subarrayIO.h"

void printSubarrayParameters(subarray_parameters_t p) {
    std::cout << p.leftmax << ' ' << p.rightmax << ' ';
    std::cout << p.sum << '\n';
}
