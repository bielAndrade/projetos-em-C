#include <stdio.h>
#include <math.h>


int main(){

    int x, y, z;

    printf("Type a Number: ");
    scanf("%d", &x);
    y = x;
    z = x;

    while (y != 0)
    {
        printf("Type another Number: ");
        scanf("%d", &y);

        if (y > x)
        {
            x = y;
            printf("\nhighest value so far: %d", y);
            printf("\nlowest value so far: %d\n\n", z);
        } else{
            z = y;
            printf("\nhighest value so far: %d", x);
            printf("\nlowest value so far: %d\n\n", z);
        } 
    } 
}

