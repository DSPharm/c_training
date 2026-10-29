#include <stdio.h>

int main(){
    int a[3] = {5, 9, 1};
    int i;
    a[2] = 7;
    printf("Elementele tabloului sunt:\n");
    for(i=0; i<3; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
