#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, year;

    //read date in ISO 8601 format (yyyy-mm-dd)
    scanf("%04d-%02d-%02d", &year, &month, &day);

    //print it in human readable form (“day[st/nd/rd/th] of name of month, year)
    if (day == 1 || day == 21 || day == 31)    {
    switch(month) {
        case 1: printf("%dst of January, %d\n", day, year); break;
        case 2: printf("%dst of February, %d\n", day, year); break;
        case 3: printf("%dst of March, %d\n", day, year); break;
        case 4: printf("%dst of April, %d\n", day, year); break;
        case 5: printf("%dst of May, %d\n", day, year); break;
        case 6: printf("%dst of June, %d\n", day, year); break;
        case 7: printf("%dst of July, %d\n", day, year); break;
        case 8: printf("%dst of August, %d\n", day, year); break;
        case 9: printf("%dst of September, %d\n", day, year); break;
        case 10: printf("%dst of October, %d\n", day, year); break;
        case 11: printf("%dst of November, %d\n", day, year); break;
        default: printf("%dst of December, %d\n", day, year); break;
    }
    }
    else if (day == 2 || day == 22)     {
    switch(month) {
        case 1: printf("%dnd of January, %d\n", day, year); break;
        case 2: printf("%dnd of February, %d\n", day, year); break;
        case 3: printf("%dnd of March, %d\n", day, year); break;
        case 4: printf("%dnd of April, %d\n", day, year); break;
        case 5: printf("%dnd of May, %d\n", day, year); break;
        case 6: printf("%dnd of June, %d\n", day, year); break;
        case 7: printf("%dnd of July, %d\n", day, year); break;
        case 8: printf("%dnd of August, %d\n", day, year); break;
        case 9: printf("%dnd of September, %d\n", day, year); break;
        case 10: printf("%dnd of October, %d\n", day, year); break;
        case 11: printf("%dnd of November, %d\n", day, year); break;
        default: printf("%dnd of December, %d\n", day, year); break;
    }
    }
    else if (day == 3 || day == 23)    {
    switch(month) {
        case 1: printf("%drd of January, %d\n", day, year); break;
        case 2: printf("%drd of February, %d\n", day, year); break;
        case 3: printf("%drd of March, %d\n", day, year); break;
        case 4: printf("%drd of April, %d\n", day, year); break;
        case 5: printf("%drd of May, %d\n", day, year); break;
        case 6: printf("%drd of June, %d\n", day, year); break;
        case 7: printf("%drd of July, %d\n", day, year); break;
        case 8: printf("%drd of August, %d\n", day, year); break;
        case 9: printf("%drd of September, %d\n", day, year); break;
        case 10: printf("%drd of October, %d\n", day, year); break;
        case 11: printf("%drd of November, %d\n", day, year); break;
        default: printf("%drd of December, %d\n", day, year); break;
    }
    }
    else    {
    switch(month) {
        case 1: printf("%dth of January, %d\n", day, year); break;
        case 2: printf("%dth of February, %d\n", day, year); break;
        case 3: printf("%dth of March, %d\n", day, year); break;
        case 4: printf("%dth of April, %d\n", day, year); break;
        case 5: printf("%dth of May, %d\n", day, year); break;
        case 6: printf("%dth of June, %d\n", day, year); break;
        case 7: printf("%dth of July, %d\n", day, year); break;
        case 8: printf("%dth of August, %d\n", day, year); break;
        case 9: printf("%dth of September, %d\n", day, year); break;
        case 10: printf("%dth of October, %d\n", day, year); break;
        case 11: printf("%dth of November, %d\n", day, year); break;
        default: printf("%dth of December, %d\n", day, year); break;
    }
    }
    return 0;
}
