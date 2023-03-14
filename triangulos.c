#include <stdio.h>
#include <math.h>


int main(){

    int s1, s2, s3;


    printf("Type the value of the first side of the triangle: ");
    scanf("%d", &s1);
    printf("Type the value of the second side of the triangle: ");
    scanf("%d", &s2);
    printf("Type the value of the third side of the triangle: ");
    scanf("%d", &s3);
    
    if (s1 > s2 + s3 || s2 > s1 + s3 || s3 > s1 + s2)
    {
        printf("\nThat is not a triangle");
    }
    else{

        if (s1 == s2 && s1 == s3)
        {
            printf("\nThat is a equilateral triangle\n");
        }
        
        else if (s1 == s2 || s2 == s3)
        {
            printf("\nThat is a isosceles triangle\n");
        }

        else if (s1 != s2 && s2 != s3)
        {
            printf("\nThat is a scalene triangle\n");
        }
        
    }

}
