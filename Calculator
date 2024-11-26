#include<stdio.h>

int main(){

    char operators;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &operators);

    switch (operators)
    {
    case '+':
        result = num1 + num2;
        printf("Addition of %.2lf and %.2lf is :%.2lf", num1,num2,result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction of %.2lf and %.2lf is :%.2lf", num1,num2,result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication of %.2lf and %.2lf is :%.2lf", num1,num2,result);
        break;
    case '/':
        if (num2 == 0){
            printf("Cannot divide by 0");
        }
        else {
        result = num1 / num2;
        printf("Division of %.2lf and %.2lf is :%.2lf", num1,num2,result);}
        break;
    default:
        printf("%c is not valid!",operators);
        break;
    }
}
