#include <stdio.h>
#include <stdbool.h>

int main(){
    int a=5, b=17;
    printf("%d\n%d\n", a, b);
    int rez_1 = 2 * a + (b % 3);
    int rez_2 = ++a + b--;
    int rez_3 = a/b;
    float rez_4 = (float)a/b;
    float rez_5 = (float)a / (float)b;
    int rez_6 = a << 4;
    int rez_7 = b >> 2;
    bool rez_8 = (a < b) && (a % 2);
    bool rez_9 = (a > b) || !(a % 5);
    bool rez_10 = a | b;
    bool rez_11 = a & b;
    bool rez_12 = a ^ b;

    printf("2 * a + (b %% 3) =  %d\n", rez_1);
    printf("++a + b-- = %d\n Now b = %d\n", rez_2, b);
    printf("a/b = %d\n", rez_3);
    printf("(float)a/b = %.2f\n", rez_4);
    printf("(float)a/(float)b = %.2f\n", rez_5);
    printf("a << 4 = %d\n", rez_6);
    printf("b >> 2 = %d\n", rez_7);
    printf("(a < b) && (a %% 2) = %d\n", rez_8);
    printf("(a > b) || !(a %% 5) = %d\n", rez_9);
    printf("a | b = %d\n", rez_10);
    printf("a & b = %d\n", rez_11);
    printf("a ^ b = %d\n", rez_12);
    return 0;
}
