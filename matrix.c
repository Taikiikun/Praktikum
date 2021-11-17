#include <stdio.h>

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
    
        // Option 1 initialisieren
        if(counter == 1){
            //Matrix initialisieren und mit 0 füllen
            for(n = 0; n <= zeile; n++){
                for(m = 0; m <= spalte; m++){
                    matrix[n][m] = zeichen2;
                }
            }
        }
        
        // Option 2 initialisieren (wie ohne Hardcodeing?)
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
        
        // Option 3 initialisieren
        if(counter == 3){
            printf("Eingabe Spalte: ");
            scanf("%d", &s);
            printf("Eingabe Zeile: ");
            scanf("%d", &z);
            matrix[s][z] = zeichen2;
        }
        
        // Option 4 initialisieren
        if(counter == 4){
            for(n = 0; n <= zeile; n++){
                for(m = 0; m <= spalte; m++){
                matrix[n][m] = zeichen;
                }
            }
        }
        
        // Option 5 ausgabe der Matrix
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






// ANDERE MUSTERLÖSUNG
#include <stdio.h>
int main() {
    char matrix[5][5];
    int m, n, o;
    int spalte;
    int zeile;
    printf("Die Matrix sieht so aus:\n");
    for(m=0; m<5; m++){
            for(n=0; n<5; n++){
                matrix [m][n] = '+';
            }
    }
    for(m=0; m<5; m++){
        for(n=0; n<5; n++){
            printf("%c ", matrix [m][n]);
        }
        printf("\n");
    }
    printf("\nOptionen:\n\n");
    while(o!=6){
        printf("(1) Fülle alle Felder mit 0\n(2) Fülle die beiden Diagonalen mit 0\n(3) Fülle ein spezielles Feld mit 0 (Spalte, Zeile)\n(4) Refresh: Fülle alle Felder wieder mit +\n(5) Ausgabe der Matrix auf dem Bildschirm\n(6) Ende des Programms\n\n");
        scanf("%i", &o);
        switch(o){
            case 1: for(m=0; m<5; m++){
                for(n=0; n<5; n++){
                    matrix [m][n] = '0';
                }
            }
            break;
            case 2:n=4;
            for(m=0;m<=4;m++){
                matrix[m][m]='0';
                matrix[m][n]='0';
            n--;
            }
            break;
            case 3:printf("Bitte geben Sie erst die Spalte, dann die Zeile ein:\n");
                scanf("%i%i", &spalte, &zeile);
                matrix [zeile-1][spalte-1]='0';
            break;
            case 4:for(m=0; m<5; m++){
                for(n=0; n<5; n++){
                    matrix [m][n] = '+';
                    }
                }
            break;
            case 5: printf("Die Matrix sieht nun so aus:\n");
                for(m=0; m<5; m++){
                    for(n=0; n<5; n++){
                    printf("%c ", matrix [m][n]);
                    }
                printf("\n");
                }
                break;
            case 6: return 0 ;
        default: printf("Ungültige Eingabe!!\n");
        }
    }
    return 0;
}
