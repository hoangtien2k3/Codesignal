/*
    Write a function that returns the sum of two numbers.
*/

#include<stdio.h>

int solution(int param1, int param2)
{
    return param1 + param2;
}

int main() {
    int param1, param2;
    scanf ("%d%d", &param1, &param2);
    printf ("%d",solution(param1, param2));
    return 0;
}