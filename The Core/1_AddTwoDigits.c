
/*
    You are given a two-digit integer n. Return the sum of its digits
    EX: n = 29  -> output: 2 + 9 = 11
*/

#include<stdio.h>

int solution (int n) {
    return ((n/10)+(n%10));
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", solution(n));
    return 0;
}