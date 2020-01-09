#include <stdio.h>
#include <stdlib.h>

int main() {
    int month, day, year;

    //read date in US-format (mm/dd/yyyy)
    scanf("%02d/%02d/%04d", &month, &day, &year);

    //print it in ISO 8601 format (yyyy-mm-dd)
    printf("%04d-%02d-%02d", year, month, day);
    return 0;

}
