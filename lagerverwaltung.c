//MUSTERLÖSUNG klappt nicht

#include <stdio.h>
#include <string.h>

#define LAGERPLATZ 50

typedef struct Item_(
  char itenName[50];
  int number;
  } Item;
  
  Item stock[LAGERPLATZ];
  
  void addItem(char *string, int number){
    for(int i = 0; i < LAGERPLATZ; i++){
      if(!strcmp(string, stock[i].itemName)){
        stock[i].number += number;
        printf("%i x %s added to stock. %i x %s are now in stock.\r\n", number, string, stock[i].number, string);
        return;
      }else if (!strcmp(stock[i].itemName, "e"))
      {
        for(int c = 0; c < 50; c++) stock[i].itemName[c] = string[c];
        stock[i].number = number;
        printf("%i x %s added new to stock\r\n", number, string);
        return;
      }
    }
    printf("Stock is Full!\r\n");
    return;
    
    void removeItem(char *string, int number){
      for(int i = 0; i < LAGERPLATZ; i++){
        if(!strcmp(string, stock[i].itemName) && stock[i].number >= number){
          stock[i].number -= number;
          printf("%i x %s removed from stock. %i x %s are now in stock.\r\n", number, string, stock[i].number, string);
          return;
        }else if(!strcmp(string, stock[i].itemName))
        {
          stock[i].number = 0;
          printf("There are not enough %s in stock. %i were removed. %i x  %s are now in stock.\r\n", string, stock[i].number, stock[i].number, string);
          return;
        }
      }
      printf("%s is not in stock.\n\r", string);
    }
    
    void printStock(void){
      int stockCount = 0;
      for(int i = 0; i < LAGERPLATZ; i++){
        if(strcmp(stock[i].itemName, "e")){
          printf("%s\t\t%i\r\n", stock[i].itemName, stock[i].number);
          stockCount += stock[i].number;
        }
      }
      printf("\r\nStock count:\t\t%i\r\n", stockCount);
    }
    
    int searchItem(char *string){
      for(int i = 0; i < LAGERPLATZ; i++){
        if(!strcmp(string, stock[i].itenName)){
          return stock[i].number;
        }
      }
      return 0;
    }
    
    int main(void){
      for(int i = 0; i < LAGERPLATZ; i++) stock[i].itemName[0] = 'e';
      printf("Welcome\n\n\r");
      
      char inputChar = 'h';
      char inputItem[50];
      int inputNumber = 1;
      int menuLoop = 1;
      int searchItems = 0;
      
      do{
        switch(inputChar){
          case 'h': //Main Menu
                    printf("\n\n\n\n\n\r"
                           "Menu\n\n\r"
                           "Add Item:\ta\n\r"
                           "Remove Item:\tr\n\r"
                           "Search Item:\ts\n\r"
                           "Show stock:\tl\n\r"
                           "Quit:\t\tq\n\n\r"
                           ">>");
                    scanf("%c", &inputChar);
                    fflush(stdin);
                    break;
            
          case 'a': //Add Item
                    printf("\n\n\n\n\n\r"
                           "Add Item\n\n\r"
                           "Home:\t\th\n\n\r"
                           "Item: ");
                    scanf("%s", inputItem);
                    fflush(stdin);
                    printf("Number: ");
                    scanf("%i", &inputNumber);
                    fflush(stdin);
                    addItem(inputItem, inputNumber);
                    printf(">>");
                    scanf("%c", &inputChar);
                    fflush(stdin);
                    break;
            
          case 'r': //Remove Item
                    printf("\n\n\n\n\n\r"
                           "Remove Item\n\n\r"
                           "Home:\t\th\n\n\r"
                           "Item: ");
                    scanf("%s", inputItem);
                    fflush(stdin);
                    printf("Number: ");
                    scanf("%i", &inputNumber);
                    fflush(stdin);
                    addItem(inputItem, inputNumber);
                    printf(">>");
                    scanf("%c", &inputChar);
                    fflush(stdin);
                    break;
            
          case 's': //Search Item
                    printf("\n\n\n\n\n\r"
                           "Search Item\n\n\r"
                           "Home\t\th\n\n\r"
                           "Item: ");
                    scanf("%s", inputItem);
                    fflush(stdin);
                    searchItems = searchItem(inputItem);
                    if(searchItems == 0) printf("%s is not in stock.\n\n\r", inputItem);
                      else printf("\n\n\r%i x %s are in stock\n\n\r", searchItems, inputItem);
                    printf(">>");
                    scanf("%c", &inputChar);
                    fflush(stdin);
                    break;
            
          case 'l': //Show Stock
                    printf("\n\n\n\n\n\r"
                           "Show Stock\n\n\r"
                           "Home:\t\th\n\n\r");
                    printStock();
                    printf("\n\n\r>>");
                    scanf("%c", &inputChar);
                    fflush(stdin);
                    break;
            
          case 'q': //Exit
                    menuLoop = 0;
                    printf("\n\n\n\n\n\rGoodbye\r\n");
                    break;
        }
      }while(menuLoop = 1);
      return 0;
    }
            
          
          
