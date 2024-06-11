#include <stdio.h>
#include <stdlib.h>

int main() {    	
    int n, a, s = 0, i = 1, m = 0;

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &a);
        s = s + a;
        if(s >= 1000000 && m == 0) {
            m = i;
        }
    }

    if(m > 0) {
        printf("%d", m);
    }

    return 0;
}