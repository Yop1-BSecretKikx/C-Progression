#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main () {
    printf("Saisie de Note \n");
    int count = 0;
    int note[6];
    bool ok = true;
    for(int i = 0; i < 6; i++) {
        count++;
        printf("Note [%d] = ", i);
        scanf("%d", &note[i]);
    }
     printf("\n");

    //Print input value
    int count2 = 0;
   for(int i = 0; i < 6; i++) {
    printf("%d,", note[i]);
    count2++;
   }
   
   true ? printf("\n") : false;
   //Total of element
   int value = 0;
   int moyen = 0;
   for(int i = 0; i < 6; i++) {
    value += note[i];
   }
   int element = sizeof(note) / sizeof(note[0]);
   moyen = value / element;
   printf("Value : %d \nElement : %d \n", value, element);
   printf("Moyen :%d \n", moyen);

   //print high value of array Note

   int max = note[0];
   for(int i = 0; i < 6; i++) {
    if(i == 0 || note[i] > max){
        max = note[i];
    }
   } 
   printf("Max Value : %d", max);
   

   //get data in FILE
   //SAVE DATA FILE PART (FILE MOYEN MAX etc TODO)


 FILE *pf = fopen("data.txt", "a");
 time_t now = time(NULL);
    if(count2 > 5) {
        fprintf(pf, "\n");
        fprintf(pf, "--- DATE %s", ctime(&now));
        fprintf(pf, "[");
        for(int k = 0; k < 6; k++ ) {
            fprintf(pf, "%d", note[k]);
                fprintf(pf, ",");
        }
        fprintf(pf, "]");
        fprintf(pf, "\n");
        fprintf(pf, " Value Totale : %d \n", value);
        fprintf(pf, " Moyen : %d \n", moyen);
        fprintf(pf, " Max Value : %d \n", max);
        fprintf(pf, " Element : %d \n", element);
        fprintf(pf, "------------------------------\n");
    }
     
}
