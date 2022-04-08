#include <string.h>
#include <stdio.h>
int main(){

	char str[20];    
  printf("Inserisci stringa: ");    
  gets(str);
  printf("La stringa inserita è: %s",str);    
  printf("\nLa stringa in maiuscolo è: %s",strupr(str)); 
	return 0;
}
