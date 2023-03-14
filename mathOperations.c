#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 5

int sum ();
int multiplication();
float division();
int age();
float money();
float imc();
int factorial();
float primo();
int weight();
int even();
float bhaskara();
float sphere();
int fibonacci();
int main()


{
    //HEADQUARTERS

    setlocale(LC_ALL,""); /*Permite acentos*/

    //sum();
    //multiplication();
    //division();
    //age();
    //money();
    //imc();
    //factorial();
    primo();
    weight();
    even();
    bhaskara();
    sphere();
    fibonacci();


    return 0;
}



int sum()

{
    // Projeto Soma

    int n1, n2, sum;

    printf("Sum part!");
    printf("\n\nType a number: ");
    scanf("%d", &n1);
    printf("Type another number: ");
    scanf("%d", &n2);
    sum = n1 + n2;
    printf("The sum is equal to: %d", sum);

}


int multiplication()

{
    //Projeto Multiplicação

    int n1, n2, mult;

    printf("\n\n\nMultiplication part!");
    printf("\n\nType a number: ");
    scanf("%d", &n1);
    printf("Type another number: ");
    scanf("%d", &n2);
    mult = n1 * n2;
    printf("The multiplication is equal to: %d", mult);

    return 0;
}

float division()

{
    //Projeto Divisão

    float n1, n2, div;

    printf("\n\n\nDivision Part!");
    printf("\n\nType a number: ");
    scanf("%f", &n1);
    printf("Type another number: ");
    scanf("%f", &n2);
    div = n1 / n2;
    printf("The division is equal to: %.2f", div);

    return 0;
}

int age()

{
    //Projeto idade

    int yr, born, age;

    printf("\n\n\nAge part!");
    printf("\n\nWhat year are we? ");
    scanf("%d", &yr);
    printf("What year were you born? ");
    scanf("%d", &born);
    age = yr - born;
    printf("\nYou are/will be %d years old!", age);

    if (age > 18) {
        printf("\nYou are able to drive a car!");
    }
    else {
        printf("\nYou can not drive a car");
    }

}

float money()

{
    //Projeto conversor de dollar

    float real, dollar, exchange;
    exchange = 5.643;

    printf("\n\n\nMoney part!");
    printf("\n\nHow much money do you have? ");
    scanf("%f", &real);
    dollar = real / exchange;
    printf("Thats the amount of money you would have in Dollars: $%.2f", dollar);

}

float imc()

{
    //Projeto IMC

    float weight, height, imc, heightimc;

    printf("\n\n\nIMC part!");
    printf("\n\nWhat is your weight in Kg?(ex:70) ");
    scanf("%f", &weight);
    printf("What is your height in meters?(ex:1,83) ");
    scanf("%f", &height);
    heightimc = pow(height, 2);
    imc = weight / heightimc;
    printf("\nThat is you IMC: %.2f", imc);

    if (imc <= 18.5) {
        printf("\nThinness. You should eat more!");
    }
    else if (imc >= 18.6, imc <= 24.9) {
        printf("\nNormal. Keep going!");
    }
    else if (imc >= 25.0, imc <= 30.0) {
        printf("\nOverweight. Stop eating that much!");
    }
    else if (imc >= 30.0, imc <= 39.9) {
        printf("\nObesity. Watch out, you should not be that fat!");
    }
    else if (imc >= 40) {
        printf("\nSerious Obesity. Congratulations you are killing yourself!!");
    }
    else {
        printf("\nError");
    }

}

int factorial()

{
    //Projeto fatorial

    int num, fac;
    int i;

    printf("\n\n\nFactorial part!");
    printf("\n\nDo you want to know the factorial of which number? ");
    scanf("%d", &num);
    fac = num;

    for (i = 1; i <= num - 1; i++) {
            fac = fac * (num - i);
        }

    printf("\nThe factorial of %d is %d", num, fac);


}

float primo()

{
    //Projeto número primo

    int numb, cont;
    int rem;
    float res;

    printf("\n\n\nPrimo part!");
    printf("\n\nType a number: ");
    scanf("%d", &numb);
    cont = 1;
    rem = 0;

    while (cont <= numb) {

        res = numb % cont;

        if (numb <= 20) {
        printf("\nresto de %.d / %d = %.2f", numb, cont, res);
        }
        cont++;

        if (res == 0) {
        rem++;
        printf(" (number of no remainder: %d)", rem);
        }
    }

    if (rem == 2) {
        printf("\n\nIt is a primo number!");
    }
    else if (rem < 2) {
        printf("\n\nWe were not able to calculate ;(");
    }
    else {
        printf("\n\nThat is not a primo number");
    }

}

int weight()

{
    //Projeto maior peso

    int wei, heav;
    int cont;
    //char name;
    heav = 0;

    printf("\n\n\nWeight part!");

    for (cont = 1; cont<=4; cont++) {

    //printf("\n\nType a persons name: ");
    //scanf("%s", &name);
    //printf("%c", name);
    printf("\n\nType his/her weight: ");
    scanf("%d", &wei);

    if (wei >= heav) {
        heav = wei;
        printf("The haviest weight so far is %d", heav);
    }
    else {
        printf("The haviest weight so far is %d", heav);
    }

    }

    printf("\n\nThe haviest weight is %d ", heav);

}

int even()

{
    //Projeto número par

    int num[TAM];
    int i, aux, cont;

    printf("\n\n\nEven number part!\n\n");

    for (i = 0; i < TAM; i++) {
        printf("Type the %d° number: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\nCurrent order of the numbers:\n\n");

    for (i = 0; i < TAM; i++) {
        printf("%3d", num[i]);
    }

    for (cont = 1; cont < TAM; cont++) {
        for (i = 0; i < TAM - 1; i++) {
            if (num[i] > num[i + 1]) {
                aux = num[i];
                num[i] = num[i + 1];
                num[i + 1] = aux;
            }
        }
    }

    printf("\n\nNumbers sorted in ascending order: \n\n");

    for(i = 0; i < TAM; i++) {
        printf("%3d", num[i]);
    }

    printf("\n\nCheck it out which of these number are even:\n");

    for (i = 0; i < TAM; i++) {
        if (num[i] % 2 == 0) {
            printf("\nThe number %d is even!", num[i]);
        }
    }

}

float bhaskara()

{
    //Projeto Bhaskara

    float a, b, c;
    float delta, x1, x2;
    float square_b, sqrt_delta;
    char cod;
    cod = 'Y';

    while (cod != 'N') {
        printf("\n\n\nBhaskara part!");
        printf("\n\nType the value of a: ");
        scanf("%f", &a);
        printf("\nType the value of b: ");
        scanf("%f", &b);
        printf("\nType the value of c: ");
        scanf("%f", &c);

        if (a == 0) {
            printf("\nThat is a first degree equation");
        }

        else {
            square_b = pow(b, 2);
            delta = square_b - (4 * a * c);

            if (delta < 0) {
                printf("\n\nDelta < 0\nThere is no real root");
            }

            else if (delta > 0){
                sqrt_delta = sqrt(delta);
                x1 = (-b + sqrt_delta) / (2 * a);
                x2 = (-b - sqrt_delta) / (2 * a);

                printf("\n\nx1 = %.2f", x1);
                printf("\nx2 = %.2f", x2);
                printf("\nDelta > 0, so x1 != x2");

                if (a > 0) {
                    printf("\n\nConcavity up");
                }
                else if (a < 0) {
                    printf("\n\nConcavity down");
                }
            }

            else {
                sqrt_delta = sqrt(delta);
                x1 = (-b + sqrt_delta) / (2 * a);
                x2 = (-b - sqrt_delta) / (2 * a);

                printf("\n\nx1 = %.2f", x1);
                printf("\nx2 = %.2f", x2);
                printf("\nDelta = 0, so x1 = x2");

                if (a > 0) {
                    printf("\n\nConcavity up");
                }
                else if (a < 0) {
                    printf("\n\nConcavity down");
                }
            }
        }
        printf("\n\n\nWant to make another count?\nY/N\n\n");
        cod = getche();
    }

}

float sphere()

{
    //Projeto Volume de uma esfera

    float r, pi;
    float sv, cube, sr;
    int measure, calc;
    pi = 3.14159;

    printf("\n\n\nSphere volume part!");

    printf("\n\nAre you calculating in cm or in m?\nType 1 to calculate in cm or 2 to calculate in meters \n(cm/m) (1/2)\n");
    scanf("%d", &measure);

    if (measure == 1) {

        printf("\nDo you want to know the value of the volume or the value of the radius?\nType 1 to calculate the volume or 2 to calculate the radius \n(v/r) (1/2)\n");
        scanf("%d", &calc);

        if (calc == 1) {
            printf("\nType the value of the radius in cm: ");
            scanf("%f", &r);

            cube = pow(r, 3);
            sv = (4 * pi * cube) /3;

            printf("The volume of this sphere is: %.2fcm³", sv);
        }


        else if (calc == 2) {
            printf("\nType the value of the volume in cm: ");
            scanf("%f", &sv);

            r = (sv * 3) / (4 * pi);
            r = cbrt(r);

            printf("The value of the radius is: %.2fcm³", r);
        }
    }

    else if (measure == 2){

        printf("\nDo you want to know the value of the volume or the value of the radius?\nType 1 to calculate the volume or 2 to calculate the radius \n(v/r) (1/2)\n");
        scanf("%d", &calc);

        if (calc == 1) {
            printf("\nType the value of the radius in m: ");
            scanf("%f", &r);

            cube = pow(r, 3);
            sv = (4 * pi * cube) /3;

            printf("The volume of this sphere is: %.2fm³", sv);
        }


        else if (calc == 2) {
            printf("\nType the value of the volume in cm: ");
            scanf("%f", &sv);

            r = (sv * 3) / (4 * pi);
            r = cbrt(r);

            printf("The value of the radius is: %.2fm³", r);
        }
    }
}

int fibonacci()

{
    //Projeto sequência de Fibonacci

    int qnt, cont;
    int current, last, result;

    cont = 1;
    result = 1;
    current = 1;
    last = 0;

    printf("\n\n\nFibonacci sequence part!");
    printf("\n\nHow many numbers do you want to see? ");
    scanf("%d", &qnt);
    printf("\n%4d", result);

    while (cont <= qnt) {
        result = current + last;
        printf("\n%4d", result);
        last = current;
        current = result;
        cont++;
    }

    printf("\n\n\n\n");
}