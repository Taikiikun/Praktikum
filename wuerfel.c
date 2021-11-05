#include <stdio.h>

int main()
{
    printf("Programm Wuerfelspiel\n\n");
    
    int i;
    int dice[5];    // Würfel Array Wertebereich 0-1-2-3-4
    int counter[6]; // Augenzahlen Array
    
    //Benutzereingabe für die gewürfelte Augenzahlen
    for(i = 1; i <= 5; i++)
    {
        printf("Bitte geben Sie Ihre Augenzahlen von Wuerfel %d ein: ", i);
        scanf("%d", &dice[i]);
    }
    
    // Ausgabe der Auswertung
    printf("Es wurde gewuerfelt:\n\n");
    printf("\t Wuerfel:     \t1\t2\t3\t4\t5\n");
    printf("\t Augenzahl:   ");
    for(i = 1; i <= 5; i++)
    {
        printf("\t%i ", dice[i]);
    }
    for(i = 0; i <= 6; i++)
    {
        counter[i] = 0;
    }
    
    //Counter für die gewürfelte Augenzahl
    for(i = 0; i <= 5; i++)
    {
        switch(dice[i])
        {
            case 1: counter[0]++;break;
            case 2: counter[1]++;break;
            case 3: counter[2]++;break;
            case 4: counter[3]++;break;
            case 5: counter[4]++;break;
            case 6: counter[5]++;break;
        }
    }
    
    //for(i=0;i<6;i++){printf("\nTest: %i\n", counter[i]);}
    
    // Auswerten vom Spielergebnis
    int j;
    for(i = 0; i <= 6; i++)
    {
        for(j = i+1; j < 5; i++)
        {
            if(counter[j] == 5)
            {
                printf("\n\n GRAND! Sie haben gewonnen!\n");
                return 0;
            }
            else if(counter[i] == 4)
            {
                printf("\n\n POKER! Sie haben gewonnen\n");
                return 0;
            }
            else if((counter[i] == 3 && counter[j] == 2) || (counter[i] ==2 && counter[j] == 3))
            {
                printf("\n\n FULL HOUSE! Sie haben gewonnen\n");
                return 0;
            }
        }
    }
    printf("\n\n Sie haben leider verloren!\n");
    return 0;
}
