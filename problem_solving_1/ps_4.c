#include <stdio.h>
#include <stdlib.h>

const int COPII_INITIAL = 7;

int calculeazaTotalExcursie(int copii1, int copii2, int *total) {
    if(copii1< 0 || copii2<0) {
        return -1;
    }

    *total = COPII_INITIAL + copii1 + copii2;
    return 0;
}

int main(void) {
    int copii_scoala_1, copii_scoala_2, total_copii;

    printf("Introduceti numarul de copii de la cele doua scoli (separate prin spatiu): ");
    if (scanf("%d %d", &copii_scoala_1, &copii_scoala_2) !=2){
        fprintf(stderr, "Eroare: Date de intrare invalide.\n");
        return EXIT_FAILURE;
    }

    if (calculeazaTotalExcursie(copii_scoala_1, copii_scoala_2, &total_copii) !=0){
        fprintf(stderr, "Eroare: NUmarul de copii nu poate fi negativ.\n");
        return EXIT_FAILURE;
    }

    printf("Date de intrare: %d %d\n", copii_scoala_1, copii_scoala_2);
    printf("Date de iesire: %d copii\n", total_copii);

    return EXIT_SUCCESS;
}
