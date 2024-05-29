// task: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/baralho/

#include <stdio.h>
#include <string.h>

void verificar_cartas(char *input) {
    int copas[13] = {0};
    int espadas[13] = {0};
    int ouros[13] = {0};
    int paus[13] = {0};

    int len = strlen(input);

    for (int i = 0; i < len; i += 3) {
        int valor = (input[i] - '0') * 10 + (input[i + 1] - '0');
        char naipe = input[i + 2];

        if (naipe == 'C') {
            copas[valor - 1]++;
        } else if (naipe == 'E') {
            espadas[valor - 1]++;
        } else if (naipe == 'U') {
            ouros[valor - 1]++;
        } else if (naipe == 'P') {
            paus[valor - 1]++;
        }
    }

    int faltando_copas = 0, faltando_espadas = 0, faltando_ouros = 0, faltando_paus = 0;
    int duplicadas_copas = 0, duplicadas_espadas = 0, duplicadas_ouros = 0, duplicadas_paus = 0;

    for (int i = 0; i < 13; i++) {
        if (copas[i] == 0) faltando_copas++;
        if (copas[i] > 1) duplicadas_copas = 1;

        if (espadas[i] == 0) faltando_espadas++;
        if (espadas[i] > 1) duplicadas_espadas = 1;

        if (ouros[i] == 0) faltando_ouros++;
        if (ouros[i] > 1) duplicadas_ouros = 1;

        if (paus[i] == 0) faltando_paus++;
        if (paus[i] > 1) duplicadas_paus = 1;
    }

    if (duplicadas_copas) {
        printf("erro\n");
    } else {
        printf("%d\n", faltando_copas);
    }

    if (duplicadas_espadas) {
        printf("erro\n");
    } else {
        printf("%d\n", faltando_espadas);
    }

    if (duplicadas_ouros) {
        printf("erro\n");
    } else {
        printf("%d\n", faltando_ouros);
    }

    if (duplicadas_paus) {
        printf("erro\n");
    } else {
        printf("%d\n", faltando_paus);
    }
}

int main() {
    char input[157];
    scanf("%s", input);
    verificar_cartas(input);
    return 0;
}