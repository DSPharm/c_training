#include <stdio.h>

int main(){
    char x;
    int i, j;
    int rinduri = 3;

    printf("Introdu un character: ");
    scanf(" %c", &x);

    for(i = 1; i <= rinduri; i++){
        for(j = 1; j <= i; j++){
            printf("%c", x);
        }
        printf("\n");
    }
    return 0;
}
