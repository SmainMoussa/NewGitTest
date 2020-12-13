#include "ModeJeu.h"

clock_t jeufacile()
{

    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    clock_t chrono, debut, fin;
    int choix = 0, penalite = 0;

    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;

    debut = clock();
    for (;;)
    {
        printf("\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
        printf("Choisissez votre porte: ");
        scanf("%d", &choix);
        printf("\n");
        if (choix == BonnePorte1)
        {
            temp = QuestionsReponses();
            if (temp == 1)
            {
                printf("\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
                printf("Choisissez votre porte: ");
                scanf("%d", &choix);
                printf("\n");
                if (choix == BonnePorte2)
                {
                    temp = QuestionsReponses();
                    if (temp == 1)
                    {
                        printf("\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        printf("\n");
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
                                printf("Choisissez votre porte: ");
                                scanf("%d", &choix);
                                printf("\n");
                                if (choix == BonnePorte4)
                                {
                                    temp = QuestionsReponses();
                                    if (temp == 1)
                                    {
                                        printf("\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                fin = clock();
                                                chrono = fin - debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES AVEC %d SECONDES DE PENALITE \n\n", (double)chrono / CLOCKS_PER_SEC, penalite);
                                                return chrono;
                                                break;
                                            }
                                            else
                                            {
                                                printf("MAUVAISE REPONSE \n\n");
                                                printf("PENALITE 3S...\n\n");
                                                for (int i = 3; i > 0; i--)
                                                {
                                                    printf("%d", i);
                                                    printf("\n");
                                                    Sleep(1000);
                                                }
                                                penalite += 3;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        printf("MAUVAISE REPONSE \n\n");
                                        printf("PENALITE 3S...\n\n");
                                        for (int i = 3; i > 0; i--)
                                        {
                                            printf("%d", i);
                                            printf("\n");
                                            Sleep(1000);
                                        }
                                        penalite += 3;
                                    }
                                }
                            }
                            else
                            {
                                printf("MAUVAISE REPONSE \n\n");
                                printf("PENALITE 3S...\n\n");
                                for (int i = 3; i > 0; i--)
                                {
                                    printf("%d", i);
                                    printf("\n");
                                    Sleep(1000);
                                }
                                penalite += 3;
                            }
                        }
                    }
                    else
                    {
                        printf("MAUVAISE REPONSE \n\n");
                        printf("PENALITE 3S...\n\n");
                        for (int i = 3; i > 0; i--)
                        {
                            printf("%d", i);
                            printf("\n");
                            Sleep(1000);
                        }
                        penalite += 3;
                    }
                }
            }
            else
            {
                printf("MAUVAISE REPONSE \n\n");
                printf("PENALITE 3S...\n\n");
                for (int i = 3; i > 0; i--)
                {
                    printf("%d", i);
                    printf("\n");
                    Sleep(1000);
                }
                penalite += 3;
            }
        }
    }
}

clock_t jeudifficile()
{
    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    clock_t chrono, debut, fin;
    int choix = 0, penalite = 0, vie = 3;
    char retour;

    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;

    debut = clock();
    for (;;)
    {
        printf("\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
        printf("Choisissez votre porte: ");
        scanf("%d", &choix);
        scanf("%c", &retour);
        printf("\n");
        if (retour == 'q')
        {
            return 0;
            break;
        }
        printf("\n");
        if (choix == BonnePorte1)
        {
            temp = QuestionsReponses();
            if (temp == 1)
            {
                printf("\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
                printf("Choisissez votre porte: ");
                scanf("%d", &choix);
                scanf("%c", &retour);
                printf("\n");
                if (retour == 'q')
                {
                    return 0;
                    break;
                }
                printf("\n");
                if (choix == BonnePorte2)
                {
                    temp = QuestionsReponses();
                    if (temp == 1)
                    {
                        printf("\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        scanf("%c", &retour);
                        printf("\n");
                        if (retour == 'q')
                        {
                            return 0;
                            break;
                        }
                        printf("\n");
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
                                printf("Choisissez votre porte: ");
                                scanf("%d", &choix);
                                scanf("%c", &retour);
                                printf("\n");
                                if (retour == 'q')
                                {
                                    return 0;
                                    break;
                                }
                                printf("\n");
                                if (choix == BonnePorte4)
                                {
                                    temp = QuestionsReponses();
                                    if (temp == 1)
                                    {
                                        printf("\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        scanf("%c", &retour);
                                        printf("\n");
                                        if (retour == 'q')
                                        {
                                            return 0;
                                            break;
                                        }
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                fin = clock();
                                                chrono = fin - debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES AVEC %d SECONDES DE PENALITE \n\n", (double)chrono / CLOCKS_PER_SEC, penalite);
                                                return chrono;
                                                break;
                                            }
                                            else
                                            {
                                                printf("MAUVAISE REPONSE \n\n");
                                                printf("PENALITE 3S...\n\n");
                                                for (int i = 3; i > 0; i--)
                                                {
                                                    printf("%d", i);
                                                    printf("\n");
                                                    Sleep(1000);
                                                }
                                                penalite += 3;
                                                vie -= 1;
                                                if (vie == 0)
                                                {
                                                    srand((unsigned)time(NULL));
                                                    BonnePorte1 = rand() % 5 + 1;
                                                    BonnePorte2 = rand() % 5 + 1;
                                                    BonnePorte3 = rand() % 5 + 1;
                                                    BonnePorte4 = rand() % 5 + 1;
                                                    BonnePorte5 = rand() % 5 + 1;
                                                    vie = 3;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        printf("MAUVAISE REPONSE \n\n");
                                        printf("PENALITE 3S...\n\n");
                                        for (int i = 3; i > 0; i--)
                                        {
                                            printf("%d", i);
                                            printf("\n");
                                            Sleep(1000);
                                        }
                                        penalite += 3;
                                        vie -= 1;
                                        if (vie == 0)
                                        {
                                            srand((unsigned)time(NULL));
                                            BonnePorte1 = rand() % 5 + 1;
                                            BonnePorte2 = rand() % 5 + 1;
                                            BonnePorte3 = rand() % 5 + 1;
                                            BonnePorte4 = rand() % 5 + 1;
                                            BonnePorte5 = rand() % 5 + 1;
                                            vie = 3;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                printf("MAUVAISE REPONSE \n\n");
                                printf("PENALITE 3S...\n\n");
                                for (int i = 3; i > 0; i--)
                                {
                                    printf("%d", i);
                                    printf("\n");
                                    Sleep(1000);
                                }
                                penalite += 3;
                                vie -= 1;
                                if (vie == 0)
                                {
                                    srand((unsigned)time(NULL));
                                    BonnePorte1 = rand() % 5 + 1;
                                    BonnePorte2 = rand() % 5 + 1;
                                    BonnePorte3 = rand() % 5 + 1;
                                    BonnePorte4 = rand() % 5 + 1;
                                    BonnePorte5 = rand() % 5 + 1;
                                    vie = 3;
                                }
                            }
                        }
                    }
                    else
                    {
                        printf("MAUVAISE REPONSE \n\n");
                        printf("PENALITE 3S...\n\n");
                        for (int i = 3; i > 0; i--)
                        {
                            printf("%d", i);
                            printf("\n");
                            Sleep(1000);
                        }
                        penalite += 3;
                        vie -= 1;
                        if (vie == 0)
                        {
                            srand((unsigned)time(NULL));
                            BonnePorte1 = rand() % 5 + 1;
                            BonnePorte2 = rand() % 5 + 1;
                            BonnePorte3 = rand() % 5 + 1;
                            BonnePorte4 = rand() % 5 + 1;
                            BonnePorte5 = rand() % 5 + 1;
                            vie = 3;
                        }
                    }
                }
            }
            else
            {
                printf("MAUVAISE REPONSE \n\n");
                printf("PENALITE 3S...\n\n");
                for (int i = 3; i > 0; i--)
                {
                    printf("%d", i);
                    printf("\n");
                    Sleep(1000);
                }
                penalite += 3;
                vie -= 1;
                if (vie == 0)
                {
                    srand((unsigned)time(NULL));
                    BonnePorte1 = rand() % 5 + 1;
                    BonnePorte2 = rand() % 5 + 1;
                    BonnePorte3 = rand() % 5 + 1;
                    BonnePorte4 = rand() % 5 + 1;
                    BonnePorte5 = rand() % 5 + 1;
                    vie = 3;
                }
            }
        }
    }
}