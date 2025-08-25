#include <stdio.h>

int main() {  
    FILE* fp;
    int num1, num2, i;
    
    fp = fopen("myfile.txt", "r");

    if (fp != NULL) {
        while(!(feof(fp))) {
            // code
        }
        fclose(fp);
    }

    return 0;
}