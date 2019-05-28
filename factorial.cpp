#include "factorial.h"

size_t comba::Factorial(size_t number) {
    return number <= 1 ? number : Factorial(number-1)*number;
}