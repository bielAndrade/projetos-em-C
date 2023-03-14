#include <stdio.h>
#include <math.h>


int main(){

    int cpf, income, dependents, payedValue;

    printf("\nType cpf value: ");
    scanf("%d", &cpf);

    while (cpf != 0)
    {
        printf("Type the value of the annual income: ");
        scanf("%d", &income);
        printf("Type the number of dependents: ");
        scanf("%d", &dependents);

        if (income < 20000)
        {
            printf("\nNo income tax to be payed\n");
        }
        
        else if (income >= 20000 && income <= 50000)
        {
            payedValue = income * 0.05;
            payedValue = payedValue - (dependents * 6000);
                if (payedValue < 0)
                {
                    payedValue = payedValue * -1;
                    printf("\nPayed back value of: %d\n", payedValue);
            }
            else{
            printf("\nThe value of the income tax to be payed is: %d\n", payedValue);
            }
        }

        else if (income > 50000 && income <= 100000)
        {
            payedValue = income * 0.10;
            payedValue = payedValue - (dependents * 6000);
                if (payedValue < 0)
                {
                    payedValue = payedValue * -1;
                    printf("\nPayed back value of: %d\n", payedValue);
            }
            else{
            printf("\nThe value of the income tax to be payed is: %d\n", payedValue);
            }
        }

        else if (income > 100000)
        {
            payedValue = income * 0.15;
            payedValue = payedValue - (dependents * 6000);
                if (payedValue < 0)
                {
                    payedValue = payedValue * -1;
                    printf("\nPayed back value of: %d\n", payedValue);
            }
            else{
                printf("\nThe value of the income tax to be payed is: %d\n", payedValue);
            }
        }
        
    printf("\nType cpf value: ");
    scanf("%d", &cpf);
    }
}