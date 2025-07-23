#include <stdio.h>

int main() {
    // #Define
    char const Even_TXT[4] = "Even";
    char const Odd_TXT[3] = "Odd";
    int const Global_size_for_binary = 8;
    int Number = 54243;
    
    if(Number % 2 == 0) {
        //Even
        //Convert To Binary
        printf("%d is a %s => Coverting to Binary ",Number,Even_TXT);

        char Number_to_binary[8];

        for(int i = 0; i < Global_size_for_binary; i++) {

            if(Number % 2 == 0) {
                Number_to_binary[i] = '0';

            }else{
                Number_to_binary[i] = '1';

            }

            Number = Number / 2;
            
        }

        for(int i = 0; i < 8; i++) {
            printf("%c", Number_to_binary[i]);
        }

        {
            printf(" 🔁 ");
        }

        int Binary_Array_Size = sizeof(Number_to_binary) /sizeof(Number_to_binary[0]);

        for(int i = Binary_Array_Size - 1; i >= 0; i--) {

            printf("%c", Number_to_binary[i]);
        }
        

    }else{
        //Odd
        //Convert To Hex

        int Number_to_hex1[9];
        printf("%d is a %s => Coverting to Hex ",Number,Odd_TXT);


        for(int i = 0; i < 9; i++) {

            Number_to_hex1[i] = Number %16;

            Number = Number / 16;

        }

        char Number_to_hex2[9];

        for(int i = 0; i < 9; i++) {


            if(Number_to_hex1[i] <= 10) {

                //Number_to_hex1[i] = Number_to_hex2[i];

                if(Number_to_hex1[i] == 0) {
                    Number_to_hex2[i] = '0';
                }
                if(Number_to_hex1[i] == 1) {
                    Number_to_hex2[i] = '1';
                }
                if(Number_to_hex1[i] == 2) {
                    Number_to_hex2[i] = '2';
                }
                if(Number_to_hex1[i] == 3) {
                    Number_to_hex2[i] = '3';
                }
                if(Number_to_hex1[i] == 4) {
                    Number_to_hex2[i] = '4';
                }
                if(Number_to_hex1[i] == 5) {
                    Number_to_hex2[i] = '5';
                }
                if(Number_to_hex1[i] == 6) {
                    Number_to_hex2[i] = '6';
                }
                if(Number_to_hex1[i] == 7) {
                    Number_to_hex2[i] = '7';
                }
                if(Number_to_hex1[i] == 8) {
                    Number_to_hex2[i] = '8';
                }
                if(Number_to_hex1[i] == 9) {
                    Number_to_hex2[i] = '9';
                }

            }else if (Number_to_hex1[i] > 10){

                if(Number_to_hex1[i] == 10) {
                    Number_to_hex2[i] = 'A';
                }
                if(Number_to_hex1[i] == 11) {
                    Number_to_hex2[i] = 'B';
                }
                if(Number_to_hex1[i] == 12) {
                    Number_to_hex2[i] = 'C';
                }
                if(Number_to_hex1[i] == 13) {
                    Number_to_hex2[i] = 'D';
                }
                if(Number_to_hex1[i] == 14) {
                    Number_to_hex2[i] = 'E';
                }
                if(Number_to_hex1[i] == 15) {
                    Number_to_hex2[i] = 'F';
                }
            }
            
        }

            int Current_Hex_to_dec_array_size = sizeof(Number_to_hex2) / sizeof(Number_to_hex2[0]);

        for(int i = Current_Hex_to_dec_array_size; i > -1;i--) {
            printf("%c", Number_to_hex2[i]);
        }

        /*
        for(int i = 0; i < 9; i++) {
            if(Number_to_hex1[i] <= 10) {

                Number_to_hex1[i] = Number_to_hex1[i];

            }else if (Number_to_hex1[i] > 9){

                if(Number_to_hex1[i] == 10) {
                    Number_to_hex1[i] = 'A';
                }
                if(Number_to_hex1[i] == 11) {
                    Number_to_hex1[i] = 'B';
                }
                if(Number_to_hex1[i] == 12) {
                    Number_to_hex1[i] = 'C';
                }
                if(Number_to_hex1[i] == 13) {
                    Number_to_hex1[i] = 'D';
                }
                if(Number_to_hex1[i] == 14) {
                    Number_to_hex1[i] = 'E';
                }
                if(Number_to_hex1[i] == 15) {
                    Number_to_hex1[i] = 'F';
                }

            }
            
        }
            */


    }
    
}
