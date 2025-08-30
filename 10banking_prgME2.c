#include <stdio.h>
  
float balance = 0;

void checkBalance(int choice);
void withdrawMoney(int choice);
void depositMoney(int choice);
void exitProgram(int choice);

int main(){
   

    printf("Welcome!!\n");

    printf("This is a banking program!!\n\n");

   int choice = 0;


    do{
    printf("1.Check balance\n2.Withdraw money\n3.Deposit money\n4.Exit\n\n");




    printf("What do you want to do(1/2/3/4): ");
    scanf("%d", &choice);

    switch(choice){

        case 1:
        checkBalance(choice);
        break;

        case 2:
        withdrawMoney(choice);
        break;

        case 3:
        depositMoney(choice);
        break;

        case 4:
        exitProgram(choice);
        break;

 
    }

}while(choice != 4);



    return 0;
}

void checkBalance(int choice){

    
    printf("\nYou have $%.2f in your bank account!\n\n",balance);


}

void withdrawMoney(int choice){

    float withdraw = 0;
    printf("Enter the amount of money you want to withdraw: $");
    scanf("%f", &withdraw);


    if(balance < withdraw){
        printf("\nInsufficient balance!! You have only $%.2f in your bank account!\n\n",balance);
    }

    else{
    balance -= withdraw;
    printf("\nYou have withdrawn $%.2f from your bank account!\n\n",withdraw);

    }

}

void depositMoney(int choice){

    float deposit = 0;
    printf("Enter the amount of money you want to deposit: $");
    scanf("%f", &deposit);

    balance += deposit;
    printf("\nYou have deposited $%.2f in your bank account!\n\n",deposit);

}

void exitProgram(int choice){  
    printf("\nGoodbye!\n\n");
}
