#include <stdio.h>

int main() {
    int n, s = 0;

    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            s = s + i;
            printf("%d ", i);
        }
        printf("%d\n", s);
    }
}