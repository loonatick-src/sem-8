#include <stdio.h>

int main() {
    float a = 1.0 - (1.0 - 1.0e-13);
    float b = (1.0 - 1.0) + 1.0e-13;
    printf("-1 + (1.0e-13 + 1) = %e", a);
    printf("")
}
