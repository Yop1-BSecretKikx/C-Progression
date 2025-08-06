//this code is not finished i trolled a lil
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void big_star() {
    char star[] = {'*'};
    for(int i = 0; i < 10; i++) {
        if(i == 0 || i == 1) {
            printf("       *");
            printf("\n");
        }
        if(i == 2 || i == 3 || i == 4 || i == 5 || i == 6){
            printf("    * ");
        }
        if(i == 7 || i == 8) {
            if(i == 7 || i == 8||i == 9) {
                printf("\n");
            }
            printf("      *");
        }
    }
}
void the_daddy_custome_session() {
    printf("Hey create your tree lil daddy sugar secrete \n");
    printf(" === Time for custome 🍦🥥 ===\n");
    printf(" === note you can chose only 3 emoji daddy ===\n");
    printf(" 0 : 🥥\n 1 : 🍧\n 2 : 🍧\n 3 : 🥥\n 4 : 🍧\n 5 : 🥥\n 6 : 🍧\n 7 : 🥥\n 8 : 🍧\n 9 : 🥥\n");
}
int main() { 
   setlocale(LC_ALL, "en_US.UTF-8"); 
   char *star[0];
    the_daddy_custome_session();
    int Task = 0;
    int da_Task[2];
    char da_emoji[3];
    for(int i = 0; i < 3; i++) {
        printf("Chose Sigma Emoji plozzz ! :");
        scanf("%d", &Task);
            if(Task == 0) {
                da_emoji[0] += 'N';
            }
            if(Task == 1) {
                da_emoji[1] += 'O';
            }
            if(Task == 2) {
               da_emoji[2] += 'V';
            }
    }
    printf("Let Daddy create da three !!!!! ...");
    int bck_space = 0;
    while ( bck_space < 3){
        bck_space++;
        printf("\n");
    }
   int adder = 1;
   char chrisms[1] = "*";
   const int size = 20;
   int element = size;
   char add_tree_systeme[] = " "; 
   char current_with_add[21] = "";
   int d = 0;
   int rom = 0;
   for(int i = 0; i < size + 10; i++) {
    current_with_add[i] += add_tree_systeme[0];
   }
   for(int i = 0; i < size; i++) {
    // add star
    if ( i == 0) {
        // bigstar();
    }
    element--;
            d++;
             if(i % 2 != 0) {
                current_with_add[element] = '\0';
             }else {
                current_with_add[element] += '\0';
             }          
  printf("%s", current_with_add);
    for(int k = 0; k < i; k++){
        rom++;
        if(k % 2 == 0) {
            chrisms[k] = '\0';
            chrisms[k] = 'X';
        }
      printf("%s", chrisms);
    }
   printf("\n");
   }
}


