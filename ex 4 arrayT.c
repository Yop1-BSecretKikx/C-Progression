
#include <stdio.h>
// for input : 1 = 2, 2 = 4, 3 = 6, 6 = 12, ...
// number[i] * 2;

struct stock_data {
    int data1;
    int data2;
};
int main () {
    struct stock_data data1;
    struct stock_data data2;
    int number[30];
    int countv = 0;
    int count = 0;
    int count_boucle3 = 0;
    for(int i = 0; i < 10; i++) {
        printf("Number %d :",i);
        scanf("%d", & number[i]);
        count++;
        if(count > 9) {
          //  int arraylen = sizeof(number) / sizeof(number[0]); optional
          printf("ligne v1 > ");
          int o = 0;
          int totale = 0;
            for(int k = 0; k < 10; k++) {
                o++;
                printf("[%d]", number[k]);
                //arr to totale In struct stockdata - data1

                if(o > 9){ 
                    //for(int w = 0; w < 10; w++) {
                   //  totale += w; printf("%d", totale); 
                  // }
                  int totale1;
                  int wwww = 0;
                  for(int ww = 0; ww < 10; ww++) {
                    
                  }
                }
                countv++;
                if(countv > 9) {
                    printf("\n");
                    printf("ligne v2 > ");
                    for(int z = 0; z < 10; z++) {
                        count_boucle3++;
                        
                            number[z] = number[z] * 2;
                        
                        //getting ending result
                        if(count_boucle3 > 9) {
                            int p = 0;
                            for(int l = 0; l < 10; l++){
                                p++;
                                printf("[%d]", number[l]);
                                if(p > 9) {
                                    printf("\n");
                                    int u = 0;
                                    for(int r = 0; r < 10; r++) {
                                        printf("[%d]", number[r]);

                                        for (int w = 0; w < 10; w++){
                                            u++;
                                            number[w] = number[w] * 2;
                                            if(u > 9) {
                                                printf("\n");
                                                for(int a = 0; a < 10; a++) {
                                                    printf("[%d]", number[a]);
                                                }
                                            }
                                        }
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", data1.data1);
    return 0;
}
