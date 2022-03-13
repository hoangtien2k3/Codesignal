
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
    int i;
    for (i = bound; i >= 0; i--) {
        if (i % divisor == 0)
            break;
    }
    return i;
}

int main() {
    int dividor, bound;
    scanf ("%d%d", &dividor, &bound);
    printf ("%d", solution(dividor, bound));
    return 0;
}