#include <stdio.h>

int main() {
    FILE* fp;
    int num = 200;
    
    fp = fopen("myfile.txt", "w");

    if (fp != NULL) {
        fprintf(fp, "%d %d", num, num * num);

        fclose(fp);
    }

    return 0;
}