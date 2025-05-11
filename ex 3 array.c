#include <stdio.h>

int main() {
	int NUMBERS[3]; // {1,2,3}
	int sum = 0;
	for(int i = 0; i < 3; i++) {
		printf("Numbers :");
	    scanf("%d", &NUMBERS[i]);
		if(i > 1) {
			for(int i = 0; i< 3; i++) {
				printf("[%d]", NUMBERS[i]);
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++){
		sum += NUMBERS[1];
	}
	printf("%d", sum);

}
