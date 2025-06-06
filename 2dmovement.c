#include <stdio.h>
#include <conio.h>  // for Windows
#include <stdlib.h>

int topSize_Horizontal = 10, topSize_Vertical = 10;
int character_X = 1, character_Y = 1;
const char *bgPrefix = "-";
const char *characterPrefix = "#";

void print_locations();
void check_buffer(int current, int row);
void check_vertical(int current);
void clear_console();

int main() {
    char ch;
    while (1)
    {
        if (_kbhit()) {
            ch = _getch();
            switch(ch) {
                case 'w':
                    if (character_Y > 0) character_Y--;
                    break;
                case 's':
                    if (character_Y < topSize_Vertical - 1) character_Y++;
                    break;
                case 'd':
                    if (character_X < topSize_Horizontal - 1) character_X++;
                    break;
                case 'a':
                    if (character_X > 0) character_X--;
                    break;
            }
            if (ch == 'q') {
                break;
            }
            clear_console();
            check_vertical(0);
            printf("Pressed button: %c\n", ch);
            print_locations();
        }
    }
    return 0;
}

void print_locations() {
    printf("X=%d, Y=%d\n", character_X, character_Y);
}

void check_buffer(int current, int row) {
    if (current >= topSize_Horizontal) {
        return;
    }
    if (row == character_Y && current == character_X) {
        printf("%s", characterPrefix);
    } else {
        printf("%s", bgPrefix);
    }
    check_buffer(current + 1, row);
}

void check_vertical(int current) {
    if (current >= topSize_Vertical) {
        return;
    }
    check_buffer(0, current);
    printf("\n");
    check_vertical(current + 1);
}

void clear_console() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
