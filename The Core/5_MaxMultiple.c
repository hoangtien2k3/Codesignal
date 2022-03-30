
/*
    Given a divisor and a bound, find the largest integer N such that:
    + N is divisible by divisor.
    + N is less than or equal to bound.
    + N is greater than 0.

    Ex: 
    dividor = 3 , bound = 10 => output: 9
*/

#include<stdio.h>

int solution(int divisor, int bound) {
    int n;
    for (n = bound; n >= 0; n--) {
        if (n % divisor == 0)
            break;
    }
    return n;
}

int main() {
    int dividor, bound;
    scanf ("%d%d", &dividor, &bound);
    printf ("%d", solution(dividor, bound));
    return 0;
}