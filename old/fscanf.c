#include <stdio.h>

int main() {
    FILE* fp;
    int num = 10;
    
    fp = fopen("myfile.txt", "r");

    if (fp != NULL) {
        fscanf(fp, "%d", &num);

        /*
        fprintf(stdout, "%d", num);
        fscanf(stdin, "%d", &num);
        */
        printf("number from file = %d\n", num);

        fclose(fp);
    }

    return 0;
}