#include <stdio.h>
#include <math.h>


int main(){

    int soma, x1, x2;
    printf("\nType a Number: ");
    scanf("%d", &x1);
    printf("\nType another number: ");
    scanf("%d", &x2);
    soma = x1 + x2;
    printf("\nThe sum of %d + %d is equal to %d\n\n", x1, x2, soma);
}
