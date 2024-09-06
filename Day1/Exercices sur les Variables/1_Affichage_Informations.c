// Écrivez un programme en C qui va permettre
//  d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email.
//  Les données sont saisies à partir du clavier.

#include <stdio.h>

int main(){
    char firstnName[30];
    char lastName[30];
    int age;
    char sexe[30];
    char emailAdresse[30];
    printf("\nenter your first name: ");
    scanf("%s",&firstnName);
    printf("\nenter your last name: ");
    scanf("%s",&lastName);
    printf("\nenter your age: ");
    scanf("%d",&age);
    printf("\nenter your sexe: ");
    scanf("%s",&sexe);
    printf("\nenter your email adresse: ");
    scanf("%s",&emailAdresse);


    printf("your first name is: %s\n",firstnName);
    printf("your last name is: %s\n",lastName);
    printf("your age is: %d\n",age);
    printf("your sexe is: %s\n",sexe);
    printf("your emailadresse is: %s\n",emailAdresse);
    return 0;
}