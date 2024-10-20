#include <stdio.h>

int main(void) {
    int i, n, prim;
    printf("inserire il numero da verificare");
    scanf("%d",&n);
    prim = 0;
    for (i=2;i<n;i++) {
    if (n%i == 0) {
        prim = 1;
    } }
    if (prim == 1) {
        printf("%d e' un numero primo", n);
    } else {
        printf("%d non e' un numero primo", n);
    }
}
