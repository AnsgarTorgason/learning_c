#include <stdio.h>
#include <stdlib.h>

int date(int d,int m,int y)
{
    if( (d>=1 && d<=31) && (m==4||m==6||m==9||m==11))
        return 1;   
    else if((d>=1 && d<=31) && (m==1||m==3||m==5||m==7||m==8||m==10||m==12))
        return 1;   
    else if((d>=1 && d<=28) && (m==2))
        return 1;   
    else if(d==29 && m==2 && ((y%400==0)||(y%4==0 && y%4!=0)))
        return 1;   
    else
        return 0; 
}

int weekday(int year, int month, int day) 
{
    int wday=0;
    wday=(day  + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) \
        + (365 * (year + 4800 - ((14 - month) / 12)))              \
        + ((year + 4800 - ((14 - month) / 12)) / 4)                \
        - ((year + 4800 - ((14 - month) / 12)) / 100)              \
        + ((year + 4800 - ((14 - month) / 12)) / 400)              \
        - 32045                                                    \
      )%7;
     return wday;   
}
 
int main()
{
    int day,month,year;
    int wDayNo=0;
    char dayNames[][12]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
 
//input date 
    scanf("%04d-%2d-%2d", &year, &month, &day);

    if(date(day,month,year) == 1 )
    {
        wDayNo=weekday(year,month,day);

        //print weekday 
        printf("%s",dayNames[wDayNo]);
    }
    else

        printf("Not a correct date! \n");

    return 0;
}
