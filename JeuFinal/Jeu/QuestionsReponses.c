#include "QuestionsReponses.h"

void strcpy_(char s1[], char s2[])
{
    int i;

    for (i = 0; s2[i] != '\0'; s1[i] = s2[i], i++)
        ;
    s1[i - 1] = '\0';
}

int QuestionsReponsesfacile()
{
    srand( (unsigned)time( NULL ) );
    FILE* fichier=NULL;
    int choix=rand ()%42+1;
    char reponse[100]="";
    char chaine1[100]="";
    char chaine2[100]="";
    char chaine3[100]="";
    fichier=fopen("questionsfacile.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine1, 100, fichier);
            if (i==choix){
                printf ("%s", chaine1);
                break;
            }
        }
    }
    fclose(fichier);
    printf ("\n");
    printf ("REPONSE: ");
    scanf ("%s", reponse);
    printf ("\n");
    fichier=NULL;
    fichier=fopen("reponsesfacile.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine2, 100, fichier);
            if (i==choix){
                strcpy_(chaine3, chaine2);
                if (strcmp(chaine3, reponse)==0){
                    fclose(fichier);
                    return 1;
               } else {
                    fclose (fichier);
                    return 0;
               }
            }
        }
    }
    return 0;
}


int QuestionsReponsesdifficile()
{
    srand( (unsigned)time( NULL ) );
    FILE* fichier=NULL;
    int choix=rand ()%42+1;
    char reponse[100]="";
    char chaine1[100]="";
    char chaine2[100]="";
    char chaine3[100]="";
    fichier=fopen("questionsdifficile.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine1, 100, fichier);
            if (i==choix){
                printf ("%s", chaine1);
                break;
            }
        }
    }
    fclose(fichier);
    printf ("\n");
    printf ("REPONSE: ");
    scanf ("%s", reponse);
    printf ("\n");
    fichier=NULL;
    fichier=fopen("reponsesdifficile.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine2, 100, fichier);
            if (i==choix){
                strcpy_(chaine3, chaine2);
                if (strcmp(chaine3, reponse)==0){
                    fclose(fichier);
                    return 1;
               } else {
                    fclose (fichier);
                    return 0;
               }
            }
        }
    }
    return 0;
}
