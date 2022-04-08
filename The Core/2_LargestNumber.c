
/*
    Given an integer n, return the largest number that contains exactly n digits.
    Ex: n = 2 => output: 99
        n = 7 => output: 9999999

*/

#include<stdio.h> 
#include<math.h>

int solution(int n) {
    return pow(10, n) - 1;
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", solution(n));
    return 0;
}