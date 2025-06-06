#include <stdio.h>

int main() {  
    FILE* fp;
    char mystring[10];
    int count = 0;
    
    fp = fopen("myfile.txt", "r");

    if (fp != NULL) {
        while (fgets(mystring, 10, fp))
            printf("string #%d read: %s\n", ++count, mystring);
        
        fclose(fp);
    }

    return 0;
}