#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int n1;

int main () {
	setlocale ( LC_ALL, "Portuguese");
printf("-------------------------------\n");
printf("-------- �MPAR OU PAR ---------\n");
printf("-------------------------------\n");

printf("DIGITE O N�MERO DESEJADO:\n");
scanf( " %d", &n1);

if ( n1%2==0) {
	printf ( "O n�mero %d � par\n", n1);
} else {
	printf ( "O n�mero %d � �mpar\n",n1);
}

return 0;









}
