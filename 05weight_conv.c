#include <stdio.h>

int main(){

   printf("Welcome!\n");
   printf("This is a Weight Conversion Calculator.\n\n");
   printf("1.Kilogram(s) to Pound(s)\n");
   printf("2.Pound(s) to Kilogram(s)\n\n");

   int choice = 0;
   double kg = 0.0;
   double pound = 0.0;

   printf("Enter your choice(1/2): ");
   scanf("%d", &choice);

   if(choice == 1){
   
     printf("Enter weight in kilogram(s): ");
     scanf("%lf", &kg);

     pound = kg*2.20462;

     printf("\n%.3lf kilogram(s) = %.3lf pound(s).\n\n", kg, pound);
     printf("Thank you!");

   }
   else if(choice ==2){
     
    
     printf("Enter weight in pound(s): ");
     scanf("%lf", &pound);

     kg = pound/2.20462;

     printf("\n%.3lf pound(s) = %.3lf kilogram(s).\n\n", pound, kg);
     printf("Thank you!");
   }

 else{
    printf("Invalid choice! Enter only 1 or 2.\n");
 }










 return 0;
}