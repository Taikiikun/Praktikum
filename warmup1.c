#include <stdio.h>

int main()
{
    int x, y;
    int sum;
    
    printf("Programm: Berechne x + y\n\n");
    printf("Bitte Wert für x eingeben: ");
    scanf("%i", &x);
    printf("Bitte Wert für y eingeben: ");
    scanf("%i", &y);
    
    sum=x+y;
    
    printf("\n\nDie Summe von %i und %i ist %i", x, y, sum);

    return 0;
}
