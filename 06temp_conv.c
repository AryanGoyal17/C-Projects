#include <stdio.h>

int main(){

    printf("Welcome!\n");
    printf("This is a Temperature Conversion Program.\n\n");
    printf("1.Celsius(C) to Fahrenheit(F)\n");
    printf("2.Fahrenheit(F) to Celsius(C)\n");
    printf("3.Celsius(C) to Kelvin(K)\n");
    printf("4.Kelvin(K) to Celsius(C)\n");
    printf("5.Fahrenheit(F) to Kelvin(K)\n");
    printf("6.Kelvin(K) to Fahrenheit(F)\n\n");

    int choice = 0;
    double C = 0;
    double K = 0;
    double F = 0;

    printf("Enter your choice(1-6): ");
    scanf("%d", &choice);

    if(choice == 1){

        printf("Enter the temperature in Celsius(C): ");
        scanf("%lf", &C);

        F = ((9.0/5.0)*C) + 32;
        printf("\n%.1lf°C = %.1lf°F\n\n",C,F);
        printf("Thank you!\n");
    }

  else if(choice == 2){

        printf("Enter the temperature in Fahrenheit(F): ");
        scanf("%lf", &F);

        C = (F-32)*(5.0/9.0);
        printf("\n%.1lf°F = %.1lf°C\n\n",F,C);
        printf("Thank you!\n");
    }

  else if(choice == 3){

        printf("Enter the temperature in Celsius(C): ");
        scanf("%lf", &C);

        K = C + 273.15;
        printf("\n%.2lf°C = %.2lf K\n\n",C,K);
        printf("Thank you!\n");
    }

  else if(choice == 4){

        printf("Enter the temperature in Kelvin(K): ");
        scanf("%lf", &K);

        C = K - 273.15;
        printf("\n%.2lf K = %.2lf°C\n\n",K,C);
        printf("Thank you!\n");
    }

  else if(choice == 5){

        printf("Enter the temperature in Fahrenheit(F): ");
        scanf("%lf", &F);

        
        K = (F-32)*(5.0/9.0) + 273.15;
        printf("\n%.2lf°F = %.2lf K\n\n",F,K);
        printf("Thank you!\n");
    }

  else if(choice == 6){

        printf("Enter the temperature in Kelvin(K): ");
        scanf("%lf", &K);

        C = K - 273.15;
        F = ((9.0/5.0)*C) + 32;
        printf("\n%.2lf K = %.2lf°F\n\n",K,F);
        printf("Thank you!\n");
    }
    else{
        printf("Invalid Choice! Enter a number from (1-6) only.\n");
    }

        
    return 0;
}