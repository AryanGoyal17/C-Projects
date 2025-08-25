#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

    printf("Hello!\n");
    printf("This program helps you to calculate Simple interest(SI) OR Compound interest(CI).\n");
    printf("Everything will be calculated in American Dollars($).\n\n");
    printf("To calculate SI type 1 and To calculate CI type 2.\n\n");

        int abc = 0;
        double P = 0.0;
        double R = 0.0;
        int T = 0.0;
        double A = 0.0;


    printf("What do you want to calculate?(1/2): ");
    scanf("%d", &abc);
    
    printf("\n");

    if(abc == 1){
      

        double SI = 0.0;

        printf("Enter the Principal: $");
        scanf("%lf", &P);
        
        printf("Enter the Rate of Interest(%%): ");
        scanf("%lf", &R);

        printf("Enter the Time Period(in years): ");
        scanf("%d", &T);

        SI = (P*R*T)/(100.00);
        A = P + SI;

        
        printf("\nThe final Amount is $%.3lf.\n",A);
        printf("The Simple Interest is $%.3lf.\n\n",SI);

        printf("Thank you!");
    }

    else if(abc ==2){

        double n = 0;
        double CI = 0.0;

        printf("Enter the Principal: $");
        scanf("%lf", &P);
        
        printf("Enter the Rate of Interest(%%): ");
        scanf("%lf", &R);

        printf("Enter the number of times interest is to be compounded in a year(n): ");
        scanf("%lf", &n);

        printf("Enter the number of years: ");
        scanf("%d", &T);

        
        A = P*pow(1 + R/(100*n),n*T);
        CI = A - P;
        

        printf("\nThe final Amount is $%.3lf.\n",A);
        printf("The total Compound Interest is $%.3lf.\n\n",CI);

        printf("Thank you!");

    }
    else{
        printf("You entered neither 1 nor 2.");
    }

    return 0;
}