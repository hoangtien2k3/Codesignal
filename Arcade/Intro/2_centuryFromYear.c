/*
    Given a year, return the century it is in. The first century spans from the year 1 up
    and including the year 100, the second - from the year 101 up to and including the year 200, etc.

    Ex:
    For year = 1905, the output should be
    solution(year) = 20

    For year = 1700, the output should be
    solution(year) = 17.
*/

#include<stdio.h>

int solution(int year)
{
    return year % 100 == 0 ? year / 100 : year / 100 + 1;
}

int main() {
    int year;
    scanf("%d", &year);
    printf("%d", solution(year));
    return 0;
}