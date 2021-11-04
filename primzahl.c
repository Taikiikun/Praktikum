#include <stdio.h>

int main(){
        //Benutzereingabe und Überprüfung, ob Eingabewert im Wertebereich liegt
        int eingabe;

        printf("Bitte geben Sie eine Zahl zwischen 2 und 1000 ein.\n");
        do{
                scanf("%i", &eingabe);
                if(!(eingabe >= 2) || !(eingabe <= 1000))
                        printf("FEHLER\nBitte geben Sie eine Zahl zwischen 2 und 1000 ein.\n");
        }while(eingabe < 2 || eingabe > 1000);
        printf("Das sind alle Primzahlen bis zu Ihrer Eingabe %i\n\n", eingabe);

        const int eingabe2 = eingabe;           //konstante festlegen = größter gültiger Eingabewert
        int istPrim[eingabe2];                  //Arrayspeicherplatz festlegen
        int i = 2;                              // i festelegen auf 2, weil 2 kleinster gültiger Startwert ist
        int vielfaches;

        // Sieb des Eratosthenes - Annahme alle Zahlen sind Primzahlen
        for(i = 2; i <= eingabe2; ++i){
                istPrim[i] = 1;
        }

        // Sieb des Eratosthenes - Alle vielfachen eleminieren = alle Zahlen die keine Primzahl sind auf Primzahl=false=0 setzen
        for(i = 2; i <= eingabe2/2; ++i){
                if(!istPrim[i]) continue;
                        for(vielfaches = 2*i; vielfaches < eingabe2; vielfaches += i)
                        istPrim[vielfaches] = 0;
        }

        // Primzahlen ausgeben
        for(i = 2; i <= eingabe2; ++i){
                if(istPrim[i])
                printf("%i; ", i);
        }

        printf("\n");

        return 0;
}
