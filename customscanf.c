#include <stdio.h>

int main() {
    double height, width;
    double area;

    printf("Enter height: ");
    scanf("%1f", &height);

    printf("Enter width: ");
    scanf("%1f", &width);
    
    area = height * width;
    printf("The area of this rectangle = %1f\n ", area);

    return 0;
}