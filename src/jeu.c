// Fun game about molly the torch and zoe
// File jeu.c

// gcc -o jeu\ linux jeu.c -lm
// gcc -o jeu\ mac jeu.c -lm
// gcc -o jeu\ windows.exe jeu.c -lm

#include <stdio.h>
#include <math.h>
#include <string.h>

#include "minigames.h"


int main()
{
    
    
    int choicecase1, choice2, choicecase2;
    
    
    for (i = 1; i < 501; i++)
    {
        printf("\n");
    }


    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║▒▓▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒▓║\n");
    printf("║▓▒░Bienvenue dans les aventures de Molly et Zoé les torches▒░▒║\n");
    printf("║▒▓▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒▓║\n");
    printf("╟──────────────────────────────────────────────────────────────╢\n");
    printf("║▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓║\n");
    printf("║▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒░▒Que voulez-vous faire\?░▒░▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒║\n"); // █ ▓ ▒ ░
    printf("║▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒░▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓║\n");
    printf("╠══════════════════════════════════════════════════════════════╣\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░1.Allons-y░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░2.Wake up donc *COMMING SOON*░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░3.Mange d'la marde░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░4.Donut (NEW!)░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("╠══════════════════════════════════════════════════════════════╝\n");
    printf("╙─> ");
    scanf(" %d", &choicecase1);

    switch (choicecase1)
    {
        case 1: 

                for (i = 1; i < 501; i++)
                {
                    printf("\n");
                }


                printf("╔══════════════════════════════════════════════════════════════╗\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                printf("║░Dans une journée ensoleillée, Zoé et Molly se baladèrent.   ░║\n");
                printf("║░Pour être honnête, elles s'emmerdaient plus qu'autre chose. ░║\n");
                printf("║░C'est alors qu'elles rencontrèrent un vieux monsieur à la   ░║\n");
                printf("║░barbe blanche qui les invita aussitôt à monter dans sa      ░║\n");
                printf("║░caravane (Surtout pas un pédo). Dans celle-ci, le vieux     ░║\n");
                printf("║░pé… monsieur leur proposa quelques jeux…                    ░║\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                printf("╠══════════════════════════════════════════════════════════════╣\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░1. Guess the Number░░░░░░░░░░░░░░░░░░░░║\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░2. non░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                printf("╠══════════════════════════════════════════════════════════════╝\n");
                printf("╙─> ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {

                    for (i = 1; i < 501; i++)
                    {
                        printf("\n");
                    }

                    /*
                    printf("╔══════════════════════════════════════════════════════════════╗\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░1. 0 à 10  ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░2. 0 à 100 ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░3. 0 à 1000░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░4. 0 à ∞   ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
                    printf("╠══════════════════════════════════════════════════════════════╝\n");
                    printf("╙─> ");
                    scanf(" %d", &choicecase2);

                    // switch (choicecase2)
                    // {
                        // case 1: 
                    */
                   break;

                } else if (choice2 == 2)
                       {
                        break;
                       }else
                       {
                        printf("SIKEE That's the wrong number\n");
                       }


                break;
               

        case 2: for (i = 1; i < 501; i++)
                {
                    printf("\n");
                }
        
                printf("/\\/\\/\\/\\/\\/\\/C'est écrit \"COMMING SOON\" !!!!\\/\\/\\/\\/\\/\\/\\\n");
                break;

        case 3: for (i = 1; i < 501; i++)
                {
                    printf("\n");
                }
                break;

        case 4: donut(); 

        default:    printf("%d N'est pas un option\n", choicecase1);
                    break;
               

       
    }








    return 0;
}