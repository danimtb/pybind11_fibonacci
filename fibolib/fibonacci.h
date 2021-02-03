#include <cstdint>

uint64_t fib(uint64_t n) {
    if (n <= 1) {
        return 1;
    }
    return fib(n -1) + fib(n - 2);
}
