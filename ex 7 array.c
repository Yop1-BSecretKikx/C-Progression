#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main () {
    int array[10];



    //Global size

    int arraySize = sizeof(array) / sizeof(array[0]);

    //Value Array

    int ValueArray = 0;

    int count = 0;
    for(int i = 0; i < 10; i++){
        printf("value [%d] : ", i);
        scanf("%d", &array[i]);
    }
    {
    printf("OLD : ");
 }
    for(int i = 0; i < arraySize; i++) {
        printf("  %d  ", array[i]);
    }
    array[arraySize - 1] = 0;
    array[arraySize - 10] = 0;

     
    for(int i = 0; i < arraySize; i++) {
         ValueArray += array[i];
    }

 printf("\n");
 {
    printf("NEW : ");
 }
   for(int i = 0; i < arraySize; i++) {
        printf("  %d  ", array[i]);
    }
    printf("\n");
     
    printf("%d \n", ValueArray);
}
