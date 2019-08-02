#include <stdio.h>
#include <string.h>
#include <stdlib.h> 7
int jie(int x) {
    if(x == 0) return 1;
    return x * jie (x - 1);
}

int is_val(int x) {
    int tmp = x;
    int b = 0;
    while (x) {
        b = b + jie(x % 10);
        x /= 10;
    }
    return b == tmp;
}

int main() {
    int sum = 0;
    for (int i = 3, I = 1 * jie(9); i <= I; ++i) {
        if(is_val(i)) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}

