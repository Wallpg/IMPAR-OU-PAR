#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int n1;

int main () {
	setlocale ( LC_ALL, "Portuguese");
printf("-------------------------------\n");
printf("-------- ÍMPAR OU PAR ---------\n");
printf("-------------------------------\n");

printf("DIGITE O NÚMERO DESEJADO:\n");
scanf( " %d", &n1);

if ( n1%2==0) {
	printf ( "O número %d é par\n", n1);
} else {
	printf ( "O número %d é ímpar\n",n1);
}

return 0;









}
