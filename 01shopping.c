
/////////SHOPPING CART PROGRAM



#include <stdio.h>
#include <string.h>


int main(){

char item[50] = "";
float price = 0.0f;
int number = 0;

printf("What would you like to buy?: ");
fgets(item, sizeof(item), stdin);
item[strlen(item) - 1] = '\0';

printf("What is the prize for each?: $");
scanf("%f", &price);

printf("How many do you want to buy?: ");
scanf("%d", &number);

printf("\n\n");

printf("You have bought ");
printf("%d ", number);
printf("%s", item);
if(number>1){
    printf("'s\n");
}
else{
    printf("\n");
}

printf("The amount which you have to pay is $%.2f.\n",price*number);
printf("Thank you!");


    return 0;
}