#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main () {
  
	int NUMBER[5];

	printf("Step 1 \n");

	for(int i = 0; i < 5;  i++) {
		printf("Tableau value [%d] : ", i);
		scanf("%d ", &NUMBER[i]);
    
		}


	for(int i = 0; i < 5; i++) {
		printf("[%d] ", NUMBER[i]);
    
	}
  
	printf("🔁 ");
	// Reverce methode [make the int i from [5 - 0] so we get eatch loop eatch NUMBER[i] start from 5 to 0
	for(int i = 4; i >= 0; i--) {
		printf("[%d] ", NUMBER[i]);
    
	}
}
