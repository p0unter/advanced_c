#include <stdio.h>

int main() {
    FILE* fp;
    char mychar;
    
    fp = fopen("myfile.txt", "r");

    if (fp != NULL) {
        printf("The file is opened for reading! \n");
        mychar = fgetc(fp);
        printf("The character that was read is: %c\n", mychar);

        fgetc(stdin);

        fclose(fp);
    }

    return 0;
}