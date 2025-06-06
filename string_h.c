#include <stdio.h>
#include <string.h>

int main() {
    char str_len[] = "Lenght";
    printf("%d\n", (int)strlen(str_len));

    char cpy_1[] = "Copy", cpy_2[10];
    strcpy(cpy_2, cpy_1);
    printf("%s\n", cpy_2);

    char str_1[20] = "Hello ", str_2[] = "World";
    strcat(str_1, str_2);
    printf("%s\n", str_1);

    char cmp_1[] = "Gokan", cmp_2[] = "Goverment";
    printf("%d\n", strcmp(cmp_1, cmp_2));
    printf("%d\n", strcmp(cmp_2, cmp_1));
    printf("%d\n", strcmp(cmp_2, cmp_2));

    return 0;
}
