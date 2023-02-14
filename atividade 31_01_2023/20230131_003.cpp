#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[11];
    int day, month, year;
    int i;
    printf("Enter a date in the format dd/mm/yyyy: ");
    scanf("%s", date);

    for(i=0; i<11; i++){
        if('/'!= date[2] || '/'!= date[5]){
            printf("Invalid date type");

        }
    }
    char day_str[3], month_str[3], year_str[5];
    strncpy(day_str, date, 2);
    day_str[2] = '\0';
    strncpy(month_str, date + 3, 2);
    month_str[2] = '\0';
    strncpy(year_str, date + 6, 4);
    year_str[4] = '\0';

    day = atoi(day_str);
    month = atoi(month_str);
    year = atoi(year_str);

    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);

    return 0;
}
//
// Created by yago2 on 2/9/2023.
//
