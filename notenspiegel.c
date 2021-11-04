#include <stdio.h>

int main(){
        int i;
        const int anzahlnoten = 5;
        int array[5];
        printf("Programm Notenspiegel\n");

        for(i=1;i<=5;i++)
        {
            printf("Bitte geben Sie die Anzahl der Note %d ein: ", i);
            scanf("%d", &array[i]);
        }

        printf("\nDer Notenspiegel sieht wie folgt aus:");
        for(i=1;i<=5;i++)
        {
            printf("\nDie Anzahl der Note %d betraegt: %d ", i, array[i]);
        }

        int gesamt = array[1] + array[2] + array[3] + array[4] + array[5];
        printf("\nDie Gesamtanzahl der Noten betraegt: %d ", gesamt);

        double ds = (array[1]*1.0+array[2]*2.0+array[3]*3.0+array[4]*4.0+array[5]*5.0)/gesamt;
        printf("\nDer Durchschnitt betraegt: %2.1lf", ds);

        float note5 = array[5];
        float anzahl = gesamt;
        double dq = (note5/anzahl)*100.0;
        printf("\nDie Durchfallquote betraegt: %3.1lf% \n", dq);
        return 0;
}
