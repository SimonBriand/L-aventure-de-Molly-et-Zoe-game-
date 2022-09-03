// Header file that defines minigames for jeu.c
// File minigames.h



#include <stdio.h>
#include <math.h>
#include <string.h>


//═══════════════════════════Donut═══════════════════════════════
double sin(), cos();
int k;
float A=0, B=0, i, j, z[1760];
char b[1760];

void donut()
{
    printf("\x1b[2J");
    for(; ; ) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; 6.28>j; j+=0.07) {
            for(i=0; 6.28 >i; i+=0.02) {
                float sini=sin(i),
                      cosj=cos(j),
                      sinA=sin(A),
                      sinj=sin(j),
                      cosA=cos(A),
                      cosj2=cosj+2,
                      mess=1/(sini*cosj2*sinA+sinj*cosA+5),
                      cosi=cos(i),
                      cosB=cos(B),
                      sinB=sin(B),
                      t=sini*cosj2*cosA-sinj* sinA;
                int x=40+30*mess*(cosi*cosj2*cosB-t*sinB),
                    y= 12+15*mess*(cosi*cosj2*sinB +t*cosB),
                    o=x+80*y,
                    N=8*((sinj*sinA-sini*cosj*cosA)*cosB-sini*cosj*sinA-sinj*cosA-cosi *cosj*sinB);
                if(22>y&&y>0&&x>0&&80>x&&mess>z[o]){
                    z[o]=mess;
                    b[o]=".,-~:;=!*#$@"[N>0?N:0];
                }
            }
        }
        printf("\x1b[d");
        for(k=0; 1761>k; k++)
            putchar(k%80?b[k]:10);
        A+=0.04;
        B+= 0.02;
    }
}


//════════════════════════════Guess═The═Number══════════════════════════════════

/*int gssNum1, gssNum2;
int 1, 2, 3, 4;
*/

/*void guessTheNumber()
{
    for (i = 1; i < 501; i++)
    {
        printf("\n");
    }



    printf("╔══════════╗\n");
    printf("║Difficulté║\n");
    printf("╠══════════╩═══════════════════════════════════════════════════╗\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░1. 0 à 10  ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░2. 0 à 100 ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░3. 0 à 1000░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░4. 0 à ∞   ░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("╠══════════════════════════════════════════════════════════════╝\n");
    printf("╙─> ");
    scanf(" %d", &gssNum1);

    switch (gssNum1)
    {
        case 1: 
                for (i = 1; i < 501; i++)
                {
                    printf("\n");
                }

                printf("



                while (gssNum2 != 1)
                {
                    

    
}*/
