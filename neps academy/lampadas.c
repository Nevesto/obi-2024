#include <stdio.h>

int main() {
    int n, in, l1 = 0, l2 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        if(in == 1) {
            l1 = !l1; 
        } else if(in == 2) {
            l1 = !l1;
            l2 = !l2; 
        }
    }

    printf("%d %d", l1, l2);
}