//////////////MAD-LIBS GAME





#include <stdio.h>
#include <string.h>

int main(){

     char noun1[50] = "";
     char noun2[50] = "";
     char pronoun1[20] = "";
     char verb[50] = "";
     char adj[50] = "";
     char pronoun2[20] = "";
     

     
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




    return 0;
}
