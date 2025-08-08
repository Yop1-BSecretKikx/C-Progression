    int main () {
        char string[] = "anaconda";
        int get_size_string = sizeof(string) / sizeof(string[0]);

        int i = -1;
        int ii = -1;
        while (i < get_size_string){
            i++;
            if(string[i] == 'a') {
                printf("%c", string[i]);
                printf("\n");
            }
        }

        while (ii < get_size_string){
            ii++;
            if(string[i] != 'a') {
                printf("\n");
                break;
            }
        }
    }
