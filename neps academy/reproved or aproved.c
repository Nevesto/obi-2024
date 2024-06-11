#include <stdio.h>

int main() {
    int a, b, m;
    scanf("%d %d", &a, &b);

    m = (a + b) / 2;

    printf("%d\n", m);

    if(m >= 7) {
        printf("Aprovado\n");
    } else if(m >= 4) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}