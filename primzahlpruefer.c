#include <stdio.h>

int main(){
  int zahl = 0;
  int counter = 3;
  
  printf("Programm: Ist n eine Primezahl?\n\n");
  printf("Bitte geben Sie für n eine Zahl ein:\n");
  scanf("%i", &zahl);
  
  if(zahl < 2 && zahl > -1)
    printf("JA!\n");
  for(counter = 3; counter < zahl; counter++)
  {
    if(zahl % counter == 0)
    {  
      printf("NEIN\n");
      return 0;
    }
  }
  printf("JA\n");
  return 0;
}
