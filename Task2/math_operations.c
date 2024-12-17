#include "math_operations.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Avoid division by zero
}

int multiply(int a, int b) {
    return a * b;
}