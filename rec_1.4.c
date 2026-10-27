#include <stdio.h>

void summ(int n, int m) {
    printf("%d + %d = %d", n, m, n + m);
    printf("\n");
}

void reduct(int n, int m) {
    printf("%d - %d = %d", n, m, n - m);
    printf("\n");
}

void product(int n, int m) {
    printf("%d * %d = %d", n, m, n * m);
    printf("\n");
}

void divid(int n, int m) {
    if (m != 0) {
        printf("%d : %d = %.2f", n, m, (float)n / m);
    } else {
        printf("Eroare: Impartire la zero!");
    }
    printf("\n");
}

int main(void) { // Schimbat din void main in int main pentru compatibilitate cu compilatoarele moderne
    int m, n, op;
    char r;

    printf("Introduceti doua numere intregi\n");
    printf("n="); scanf("%d", &n);
    printf("m="); scanf("%d", &m);

    printf("Ce operatie doriti sa se efectueze cu aceste numere?\n");
    printf("\n1-adunare\n2-scadere\n3-inmultire\n4-impartire\n");
    scanf("%d", &op);

    r = 'y';
    while (r == 'y') {
        switch (op) {
            case 1: summ(n, m); break;
            case 2: reduct(n, m); break;
            case 3: product(n, m); break;
            case 4: divid(n, m); break;
            default: printf("Ati introdus gresit operatia!\n");
        }

        printf("\nDoriti sa continuati? y/n ");
        
        // REZOLVARE BUG BUFFER: Consuma automat '\n' (tasta Enter) ramasa de la scanf-ul anterior
        scanf(" %c", &r); 

        if (r == 'y') {
            printf("\nCe operatie doriti sa se efectueze cu aceste numere?\n");
            printf("\n1-adunare\n2-scadere\n3-inmultire\n4-impartire\n");
            scanf("%d", &op);
        }
    }
    printf("%d + %d = %d\n",n,m,n+m);
    printf("%d - %d = %d\n",n,m,n-m);
    printf("%d * %d = %d\n",n,m,n*m);
    printf("%d : %d = %.2f\n",n,m,(float)n/m);
    return 0;
}
