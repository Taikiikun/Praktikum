#include <stdio.h>

int main()
{
    const int zeile = 5;
    const int spalte = 5;
    char matrix[5][5];
    int n, m;
    char zeichen = 'X';
    
    printf("Die Matrix sieht so aus: \n\n");
    for(n = 0; n <= zeile; n++){
        for(m = 0; m <= spalte; m++){
            matrix[n][m] = zeichen;
        }
    }
    for(n = 0; n < 5; n++){
        for(m = 0; m < 5; m++){
            //printf("\n");
            //printf("%c \t ",matrix[n][m]);
        }
    printf("%c \n",matrix[n][m]);
    }

    return 0;
}
