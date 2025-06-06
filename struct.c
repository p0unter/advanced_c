#include <stdio.h>

struct date {
    int day;
    int month;
    int year;    
};

typedef struct point {
    float x;
    float y;
}Point; // alias

int main() {
    struct date Date;
    printf("Enter day: ");
    scanf("%d", &Date.day);
    
    printf("Enter month: ");
    scanf("%d", &Date.month);
    
    printf("Enter year: ");
    scanf("%d", &Date.year);

    printf("%d/%d/%d", Date.day, Date.month, Date.year);
    return 0;

    Point p1;
    Point p2 = { 2, 3 };
    Point p3 = { .x = 1, .y = 5 };
    Point p4 = { .y = 11, .x = 6 };
    Point p5 = { .x = 1 };

    Point ps[5];
}