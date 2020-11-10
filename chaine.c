#include<stdio.h>
#include <string.h>

int main(){

char rep[4];

printf("Saisir oui ou non \n");
scanf("%s", rep);

    if(strcmp(rep,"oui") == 0 || strcmp(rep, "o") == 0){
      printf("Vous avez saisi oui \n");
    }else if(strcmp(rep,"non") == 0 || strcmp(rep, "n") == 0)
        printf(" Vous avez saisi non \n");
        else
        printf("Echec du programme vous devez saisir oui ou non \n");
return 0;
}
