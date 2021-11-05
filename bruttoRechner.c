#include <stdio.h>

int main(){
        float netto, mwst, brutto;
        printf("Programm zur Berechnung eines Bruttobetrages\n");
        printf("\n");
        printf("Bitte geben Sie den Nettobetrag in EUR ein:\n");
        scanf("%f", &netto);
        printf("\n");
        printf("Nettobetrag                     =%8.2f EUR\n", netto);
        mwst = netto * 0.19;
        printf("Mehrwertsteuersatz 19.00 %      =%8.2f EUR\n", mwst);
        brutto = netto + mwst;
        printf("Bruttobetrag                    =%8.2f EUR\n", brutto);
        return 0;
}
