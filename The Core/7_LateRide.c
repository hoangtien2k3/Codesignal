
/*
    ... Using the bike's timer, calculate the current time. Return an answer as the sum of 
        digits that the digital timer in the format hh:mm would show.

    Ex: n = 240 => output: 04:00 -> 0 + 4 + 0 + 0 = 4
        n = 808 => output: 13:28 -> 1 + 3 + 2 + 8 = 14

*/

#include<stdio.h>

int solution(int n) {
    int sum1, sum2;
    sum1 = ((n/60)/10) + ((n/60)%10);
    sum2 = ((n%60)/10) + ((n%60)%10);
    return sum1 + sum2;
}

int main() {
    int n;
    scanf ("%d", &n);
    printf ("%d", solution(n));
    return 0;
}

