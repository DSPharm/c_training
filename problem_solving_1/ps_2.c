#include <stdio.h>

int main(){
    int n, i, j;
    int rinduri = 4;
    int a=0;

    printf("Introdu numarul natural n: ");
    scanf("%d", &n);

    for(i=1; i<=rinduri; i++){
        for(j=1; j<=i; j++){
            printf("%d ", n+a);
        }
        a += 2;
        printf("\n");
    }
    return 0;
}
