#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int zeile = 5;
    const int spalte = 5;
    char matrix[5][5];
    int n, m;
    char zeichen = '+';
    char zeichen2 = '0';
    int counter;
    int s;
    int z;
    
    //Matrix initialisieren und mit + füllen
    printf("Die Matrix sieht so aus: \n\n");
    for(n = 0; n <= zeile; n++){
        for(m = 0; m <= spalte; m++){
            matrix[n][m] = zeichen;
        }
    }
    //gefüllte Matrix ausgeben
    for(n = 0; n < 5; n++){
        for(m = 0; m < 5; m++){
            printf("%c ",matrix[n][m]);
        }
        printf("\n");
    }

    //Benutzeroptionen anzeigen
    printf("\nOptionen:\n");
    printf("(1)\tFülle alle Felder mit 0\n");
    printf("(2)\tFülle die beiden Diagonalen mit 0 (Spalte, Zeile)\n");
    printf("(3)\tFülle ein spezielles Feld mit 0 (Spalte, Zeile)\n");
    printf("(4)\tRefresh: Fülle alle Felder wieder mit +\n");
    printf("(5)\tAusgabe der Matrix auf dem Bildschirm\n");
    printf("(6)\tEnde des Programms\n\n");
    
    do{
    
        do{
            printf("Eingabe: ");
            scanf("%d", &counter);
            printf("\n");
        }while(counter <5);
    
        if(counter == 1){
            //Matrix initialisieren und mit 0 füllen
            for(n = 0; n <= zeile; n++){
                for(m = 0; m <= spalte; m++){
                    matrix[n][m] = zeichen2;
                }
            }
        }
        if(counter == 2){
            matrix[0][0] = zeichen2;
            matrix[1][1] = zeichen2;
            matrix[2][2] = zeichen2;
            matrix[3][3] = zeichen2;
            matrix[4][4] = zeichen2;
            matrix[0][4] = zeichen2;
            matrix[1][3] = zeichen2;
            matrix[3][1] = zeichen2;
            matrix[4][0] = zeichen2;

        }
        if(counter == 3){
            printf("Eingabe Spalte: ");
            scanf("%d", &s);
            printf("Eingabe Zeile: ");
            scanf("%d", &z);
            matrix[s][z] = zeichen2;
        }
        if(counter == 4){
            for(n = 0; n <= zeile; n++){
                for(m = 0; m <= spalte; m++){
                matrix[n][m] = zeichen;
                }
            }
        }
        if(counter == 5){
            for(n = 0; n < 5; n++){
                for(m = 0; m < 5; m++){
                    printf("%c ",matrix[n][m]);
                }
                printf("\n");
            }
        }
    }while(counter < 6);

    return 0;
}
