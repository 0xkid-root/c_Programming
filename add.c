// #include <stdio.h>

// int main() {
//     add(2, 3);   // ❌ compiler confused
// }

// int add(int a, int b) {
//     return a + b;
// }



#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    printf("%d", result);
    return 0;
}