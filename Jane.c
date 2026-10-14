#include <stdio.h>
int main(){

    int number, number1, number2,  sum, difference, quotient, product;
    
    printf("===========Enter 2 Numbers============\n");
    printf("Enter 1st Number: ");
    scanf("%d", &number);

    printf("Enter 2nd Number: ");
    scanf("%d", &number);

    sum = number1 + number2;
    difference = number1 + number2;
    quotient = number1 + number2;
    product = number1 + number2;

    printf("==========Result===========\n");
    printf("addition: %d\n",sum);
    printf("Subtraction: %d\n", difference);
    printf("division: %d\n", quotient);
    printf("product: %d\n", product);

    return 0;
}