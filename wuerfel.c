#include <stdio.h>

int main()
{
    printf("Programm Wuerfelspiel\n\n");
    
    int i;
    int wuerfel[5];
    int augen[6];
    
    for(i = 1; i <= 5; i++){
        printf("Bitte geben Sie Ihre Augenzahlen von Wuerfel %d ein: ", i);
        scanf("%d", &wuerfel[i]);
    }
    printf("Es wurde gewuerfelt:\n\n");
    for(i = 1; i <= 5; i++){
        printf("Wurf %d - Augenzahl %d\n", i, wuerfel[i]);
    }
// problem wie gehts weiter
    return 0;
}
