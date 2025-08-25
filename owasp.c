#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>


void tempConv();
void calculator();
void numGuess();
void rps();
void madlibs();

int main(){


    printf("Welcome!\n");

    printf("1.Temperature Convertor Program\n");
    printf("2.Calculator\n");
    printf("3.Number-guessing game\n");
    printf("4.ROCK-PAPER-SCISSORS\n");
    printf("5.Mad-libs game\n\n\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: tempConv(); 
        break;

        case 2: calculator();
        break;

        case 3: numGuess();
        break;

        case 4: rps();
        break;

        case 5: madlibs();
        break;

        default: 
        printf("Invalid choice!\n");
        break;


    }
    



    return 0;
}

void tempConv(){

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


}

void calculator(){

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
}

void numGuess(){

    printf("***NUMBER GUESSING GAME***\n\n");

    int num = 0;
    int min = 1;
    int max = 100;
    

    srand(time(NULL));
    int randomNum = (rand() % (max - min + 1)) + min;

    printf("Enter a number(between 1 and 100): ");
    scanf("%d", &num);

    int attempt = 1;

    while(!(num == randomNum)){

        attempt++;

        
        if(num > randomNum){
            printf("TOO HIGH!\n");
        }
        if(num < randomNum){
            printf("TOO LOW!\n");
        }

       
        
        printf("Try again! Enter a number(between 1 and 100): ");
        scanf("%d", &num);
    }

    

    printf("\nYou win!!\nThe answer is %d!\n",randomNum);
    printf("You took %d attempts...",attempt);


}

void rps(){

    printf("*ROCK-PAPER-SCISSORS*\n\n");

    printf("1.ROCK\n2.PAPER\n3.SCISSORS\n\n");

    int choice = 0; 

    printf("Enter your choice(1/2/3): ");
    scanf("%d", &choice);

    srand(time(NULL));
    int min = 1;
    int max = 3;

    int randomNum = (rand() % (max - min + 1)) + min;

    if(choice == randomNum){

        if(choice == 1){
            printf("You chose ROCK!\n");
            printf("Computer chose ROCK!\n\n");
        }

        if(choice == 2){
            printf("You chose PAPER!\n");
            printf("Computer chose PAPER!\n\n");
        }

        if(choice == 3){
            printf("You chose SCISSORS!\n");
            printf("Computer chose SCISSORS!\n\n");
        }
        
        printf("That's a tie!\n");
    }

       if(choice != randomNum){
        if(choice == 1 && randomNum == 2){
            printf("You chose ROCK!\n");
            printf("Computer chose PAPER!\n\n");
            printf("You LOSE!");
        }

        if(choice == 1 && randomNum == 3){
            printf("You chose ROCK!\n");
            printf("Computer chose SCISSORS!\n\n");
            printf("You WIN!");
        }

        if(choice == 2 && randomNum == 1){
            printf("You chose PAPER!\n");
            printf("Computer chose ROCK!\n\n");
            printf("You WIN!");
        }

        if(choice == 2 && randomNum == 3){
            printf("You chose PAPER!\n");
            printf("Computer chose SCISSORS!\n\n");
            printf("You LOSE!");
        }
 
        if(choice == 3 && randomNum == 1){
            printf("You chose SCISSORS!\n");
            printf("Computer chose ROCK!\n\n");
            printf("You LOSE!");
        }

        if(choice == 3 && randomNum == 2){
            printf("You chose SCISSORS!\n");
            printf("Computer chose PAPER!\n\n");
            printf("You WIN!");
        }

       }
}

void madlibs(){

     char noun1[50] = "";
     char noun2[50] = "";
     char pronoun1[20] = "";
     char verb[50] = "";
     char adj[50] = "";
     char pronoun2[20] = "";
     

     getchar();
     printf("Enter a noun(a place): ");
     fgets(noun1, sizeof(noun1), stdin);
     noun1[strlen(noun1) - 1] = '\0';

     
     printf("Enter a noun(Name of a famous person): ");
     fgets(noun2, sizeof(noun2), stdin);
     noun2[strlen(noun2) - 1] = '\0';

     
     printf("Enter a pronoun(He/She depending on the gender of the person whose name you wrote before): ");
     fgets(pronoun1, sizeof(pronoun1), stdin);
     pronoun1[strlen(pronoun1) - 1] = '\0';

     
     printf("Enter a verb(ending with -ing): ");
     fgets(verb, sizeof(verb), stdin);
     verb[strlen(verb) - 1] = '\0';

     
     printf("Enter an adjective(ending with -ed): ");
     fgets(adj, sizeof(adj), stdin);
     adj[strlen(adj) - 1] = '\0';

    
     printf("Enter a pronoun(his/her depending on the gender of the person whose name you wrote before): ");
     fgets(pronoun2, sizeof(pronoun2), stdin);
     pronoun2[strlen(pronoun2) - 1] = '\0';



     printf("\nYesterday I went to a %s.\n",noun1);
     printf("There I saw %s.\n",noun2);
     printf("%s was %s.\n", pronoun1, verb);
     printf("I was %s and then I went to ask for %s autograph.", adj, pronoun2);

}

 