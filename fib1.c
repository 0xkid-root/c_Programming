#include <stdio.h>

int fib(int n) {
    if(n == 0)   // base case
        return 0;

    if(n == 1)   // base case
        return 1;

    int fibnm1 = fib(n - 1);   // step 1: fib(n-1)
    int fibnm2 = fib(n - 2);   // step 2: fib(n-2)

    int fibn = fibnm1 + fibnm2;   // step 3: add both

    return fibn;   // step 4: return result
}

int main() {
    int n = 7;

    // for(int i = 0; i < n; i++) {
        printf("%d ", fib(n));
    // }

    return 0;
}

