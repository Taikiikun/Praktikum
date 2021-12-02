
//MUSTERLÖSUNG

#include <stdio.h>

int sucheZeichen(const char s[], char c) {
         int i = 0;
         int anzahl = 0;
         while(s[i] != '\0') {
                 if(s[i] == c) anzahl++;
                 i++;
         }
         return anzahl;
}

int laengeZeichenkette(const char s[]) {
         int laenge = 0;
         int i = 0;
                 while(s[i] != '\0') {
                 laenge++;
                 i++;
         }
         return laenge;
}

int main() {

         char buchstabe;
         const char i;
         char name[i];
         char suche;
         int anzahl;
         int buchstabenzahl;

         int sucheZeichen(const char s[], char c);
         int laengeZeichenkette(const char s[]);

         printf("Bitte Namen eingeben: ");
         scanf("%s", name);
         //fflush( stdin );

         anzahl = laengeZeichenkette(name);
         printf("\n%s hat %i Zeichen.\n\n", name, anzahl);

         while (suche != 'n') {
                 printf("Möchtest du nach einem Buchstaben in %s suchen (j/n)?", name);
                 scanf(" %c", &suche);
         //fflush( stdin );
                 switch (suche) {
                         case 'n': printf("\nAuf Wiedersehen!\n");
                                 return 0;
                         case 'j': printf("\nBitte Buchstaben eingeben: ");
                                   scanf(" %c", &buchstabe);
                   //fflush( stdin );
                                   buchstabenzahl = sucheZeichen(name, buchstabe);
                                   printf("\nDer Buchstabe %c kommt %i-mal vor.\n\n", buchstabe, buchstabenzahl);
                                }
                  }

         return 0;
}
