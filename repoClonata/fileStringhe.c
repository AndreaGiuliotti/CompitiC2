#include <stdio.h>
int main(){

	char str[20];
  printf("Inserisci una stringa: ");    
  gets(str); 
  printf("La stringa inserita è: %s",str);    
  printf("\nLa stringa scritta al contrario è: %s",strrev(str));   	
	
	return 0;
}
