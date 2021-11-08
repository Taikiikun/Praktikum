#include <stdio.h>

int main()
{
    int eingabe;
    int expo;
    int basis = 2;
    const int max = eingabe;
    int xxx;
    
    
    printf("Programm Zahlenfolge\n\n");
    
    printf("Wieviele Quadratzahlen sollen berechnet werden? ");
    scanf("%i", &eingabe);
    
    printf("\n\nHier die %i Quadratzahlen: ", eingabe);
    for(expo = 0; expo<=eingabe; expo++){
        xxx = basis<<expo;
        printf("%i; ", xxx);
    }
    return 0;
}
