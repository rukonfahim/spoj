#include<stdio.h>
int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d", &year);

    if(year%400==0 || (year%4==0 && year%100!=0))
    printf("Year is leap year");
    else
        printf("lmao mama leap year hoynai");

}
