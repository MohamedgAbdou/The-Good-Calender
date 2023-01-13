#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time = time(NULL);
    struct tm *time_info = localtime(&current_time);

    printf("\Welcome to the Good Calender!\n\n");
    printf("Today's date is: %d/%d/%d\n",
        time_info->tm_mday,
        time_info->tm_mon + 1,
        time_info->tm_year + 1900);
    printf("The current time is: %d:%d:%d\n\n",
        time_info->tm_hour,
        time_info->tm_min,
        time_info->tm_sec);
    printf("Made by Mohamed G Abdou\n\n");
    printf("Press Enter to close the program\n");
    char c = getchar();
    if(c == 27){
        return 0;
    }
    return 0;
}
