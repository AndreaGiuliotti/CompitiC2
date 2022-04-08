#include <stdio.h>
int main(){

	char c[30];
	printf("Scrivi una breve frase: ");
	gets(c);
	printf("\nHai inserito la frase '%s'", c);

	return 0;
}
