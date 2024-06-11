#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        int primo = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                primo = 0;
                break;
            }
        }
        if(primo) {
            printf("%d ", i);
        }
    }       
}