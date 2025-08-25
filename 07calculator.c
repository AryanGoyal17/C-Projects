#include <stdio.h>

int main(){

    double x = 0;
    double y = 0;
    char op = '\0';
    double result = 0;

    printf("Enter the first number: ");
    scanf("%lf", &x);

    printf("Select the operator(+,-,*,/): ");
    scanf(" %c", &op);


    switch(op){

        case '+':

        printf("Enter the second number: ");
        scanf("%lf", &y);

        result = x + y;
        printf("\nResult: %.4lf.",result);///Instead of printf("\n%lf + %lf is %lf.",x,y,result);
        break;

        case '-':

        printf("Enter the second number: ");
        scanf("%lf", &y);

        result = x - y;
        printf("\nResult: %.4lf.",result);
        break;

        case '*':

        printf("Enter the second number: ");
        scanf("%lf", &y);

        result = x * y;
        printf("\nResult: %.4lf.",result);
        break;

        case '/':

        printf("Enter the second number: ");
        scanf("%lf", &y);

        if(y == 0){
            printf("\nDivision by 0 is not defined.");////An if statement inside a switch is also a nested if-statement.
        }
        else{

        result = x / y;
        printf("\nResult: %.4lf.",result);
        }
        break;

        default:
        printf("\nInvalid! Enter the correct operator(+,-,*,/).");
        
    }

    return 0;
}