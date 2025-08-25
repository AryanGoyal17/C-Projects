#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice(int choice);
int getComputerChoice(int min, int max);

int main(){

         srand(time(NULL));


    printf("*ROCK-PAPER-SCISSORS*\n\n"); 

    printf("1.ROCK\n2.PAPER\n3.SCISSORS\n\n");

   
    int min = 1;
    int max = 3;



    int Userchoice = getUserChoice(0);


   printf("You chose %s!\n", (Userchoice == 1) ? "ROCK" : (Userchoice == 2) ? "PAPER" : "SCISSORS");


   
 int Compchoice = getComputerChoice(min,max);

  printf("Computer chose %s!\n\n", (Compchoice == 1) ? "ROCK" : (Compchoice == 2) ? "PAPER" : "SCISSORS");



   /* if(Compchoice == 1){ 
        printf("Computer chose ROCK!\n\n");
    }

    if(Compchoice == 2){
        printf("Computer chose PAPER!\n\n");
    }

    if(Compchoice == 3){
        printf("Computer chose SCISSORS!\n\n");
    }    */         // Similarly i had written if statements for if(Userchoice == 1.. 2 and 3..)

    if(Userchoice == Compchoice){
        printf("That's a tie!!!\n");
    }

   else if(Userchoice == 3 && Compchoice == 2 || Userchoice == 1 && Compchoice == 3 || Userchoice == 2 && Compchoice == 1){
        printf("You WIN!!!\n");
    }
    else{
        printf("You LOSE!!!\n");
    }

                                //OR

   /* if(Userchoice == 1 && Compchoice == 2 || Userchoice == 2 && Compchoice == 3 || Userchoice == 3 && Compchoice == 1){
        printf("You LOSE!!!\n");
    } */

    return 0;
}

int getUserChoice(int choice){

    printf("Enter your choice(1/2/3): ");
    scanf("%d", &choice);

    while(choice < 1 || choice > 3){
        printf("Invalid!! Enter your choice(1/2/3): ");
        scanf("%d", &choice);
    }

    return choice;

}

int getComputerChoice(int min, int max){

    int randomNum = (rand() % (max - min + 1)) + min;

    return randomNum;    // OR we can just write return (rand() % (max - min + 1)) + min; instead of int randomNum = ...

    
}