//Progr #2
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Number Gen
int GEN_NUMB () {
	int TIME = clock();
	//Gen number frome Current time
		int GUESS_GENERATED_NUMBER = rand() + TIME;
		return GUESS_GENERATED_NUMBER;
}
int main () {
	//test
	//int TIME = clock();
	//int GUESS_GENERATED_NUMBER = rand() + TIME;
	int FUNC_TIME = GEN_NUMB();

		printf("The secret Number is : %d  [Should be hidden]\t \n",FUNC_TIME );

		int GUESS_USER;
		int TRIAL, CURRENCT_TRIAL = 0;
		int GUESS_TRIAL = 11; // For 10[Number of trial]
		int CURRENT_GUESS = 0;

		while (GUESS_USER != FUNC_TIME){
			CURRENT_GUESS++; // +1 trial count eatch time loop start
			if (CURRENT_GUESS != GUESS_TRIAL) {

			printf("Your Guess is > ");
			scanf("%d", &GUESS_USER);

			if (GUESS_USER != FUNC_TIME && GUESS_USER > FUNC_TIME) {

				printf("[ [%d/%d] LOSE]  - \n", CURRENT_GUESS, GUESS_TRIAL - 1);

			}else if (GUESS_USER < FUNC_TIME){

				printf("[ [%d/%d] LOSE]  + \n", CURRENT_GUESS, GUESS_TRIAL - 1);

			} else {

				printf("[SUCCES] 💎");

				break;
			}


		} else {
				printf("You lose You use all of your trial");
				break;
			}

		}
			


}
