#include <stdio.h>

int main(){
        float seiteA, seiteB, summe_1, summe_2;
        printf("Programm zur Berechnung des Umfanges und der Fläche von Rechtecken.\n");
        printf("\n");
        printf("Bitte geben Sie die Seite a in cm ein:\n");
        scanf("%f", &seiteA);
        printf("Bitte geben Sie die Seite b in cm ein:\n");
        scanf("%f", &seiteB);
        printf("\n");
        printf("Die Seite a ist %8.2f cm lang\n", seiteA);
        printf("Die Seite b ist %8.2f cm lang\n", seiteB);
        summe_1 = seiteA + seiteA + seiteB + seiteB;
        summe_2 = seiteA * seiteB;
        printf("Der Umfang des Rechtecks betraegt %8.2f cm\n", summe_1);
        printf("Die Fläche des Rechtecks betraegt %8.2f cm^2\n", summe_2);
        return 0;
}
