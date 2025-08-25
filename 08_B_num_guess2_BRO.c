#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){


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

    


    return 0;
}