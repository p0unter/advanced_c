#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSeconds, hours, minutes, remainingSeconds;
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    printf("Total hours: %d\n", hours);
    printf("Total minutes: %d\n", minutes);
    printf("Total remaining seconds: %d\n", remainingSeconds);

    return 0;
}