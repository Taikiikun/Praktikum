// AP1 Übung 1 Warm-Up Aufgabe 1

// Programm Quadratzahlen

#include <stdio.h>

int main()
{
    int eingabe;
    int i;
    int xxx;
    
    printf("Programm Zahlenfolge\n\n");
    
    printf("Wieviele Quadratzahlen sollen berechnet werden? ");
    scanf("%i", &eingabe);
    
    printf("\n\nHier die %i Zweierpotenzen: ", eingabe);
    for(i=1; i<=eingabe; i++){
        xxx = i*i;
        printf("%i; ", xxx);
    }
    return 0;
}

//Programm 2er Potenzen

#include <stdio.h>

int main()
{
    int eingabe;
    int expo;
    int basis = 2;
    const int max = eingabe;
    int xxx;
    
    
    printf("Programm Zahlenfolge\n\n");
    
    printf("Wieviele Zweierpotenzen sollen berechnet werden? ");
    scanf("%i", &eingabe);
    
    printf("\n\nHier die %i Zweierpotenzen: ", eingabe);
    for(expo = 0; expo<=eingabe; expo++){
        xxx = basis<<expo;
        printf("%i; ", xxx);
    }
    return 0;
}
