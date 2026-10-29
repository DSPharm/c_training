#include <stdio.h>
#include <stdlib.h>

const int DIFERENTA_BAIETI_FETE = 10;

int calculeazaTotalElevi(int fete, int *total){
    if(fete<0){
        return -1;
    }

    int baieti = fete + DIFERENTA_BAIETI_FETE;
    *total = fete + baieti;
    return 0;
}

int main(void){
    int fete, total;

    printf("Introduceti numarul de fete: ");
    if(scanf("%d", &fete) != 1) {
        fprintf(stderr, "Eroare: Date de intrare invalide (nu s-a citit un intreg). \n");
        return EXIT_FAILURE;
    }

    if(calculeazaTotalElevi(fete, &total) != 0) {
        fprintf(stderr, "Eroare: Numarul de fete nu poate fi negativ.\n");
        return EXIT_FAILURE;
    }

    printf("Date de intrare: %d\n", fete);
    printf("Date de iesire: %d\n", total);

    return EXIT_SUCCESS;
}
