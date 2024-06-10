#include <stdio.h>
#include <string.h>

int main() {
    char linha[7];
    int wins = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%c", &linha[i]);
    }

    for(int i = 0; i < 6; i++) {
        if(linha[i] == 'V') {
            wins++;     
        }
    }   

    if(wins == 6 || wins == 5) {
        printf("1\n");
        return 0;
    } else if(wins == 4 || wins == 3) {
        printf("2\n");
        return 0;
    } else if(wins == 2 || wins == 1) {
        printf("3\n");
        return 0;
    } else {
        printf("-1\n");
        return 0;
    }

    return 0;
}