//Progr #1
#include <stdio.h>
#include <string.h>

int main () {
	int STOCKAGE_VALUE , SOMME = 0;
	while (STOCKAGE_VALUE > 0)
	{
		printf("number >");
		scanf("%d", &STOCKAGE_VALUE);
		printf("%d \n", STOCKAGE_VALUE);
		if (STOCKAGE_VALUE > 0) {
			SOMME += STOCKAGE_VALUE;
		} else {
			if ( STOCKAGE_VALUE < 0) {
			printf("%d", SOMME);
		}
		}
	}
	
}
