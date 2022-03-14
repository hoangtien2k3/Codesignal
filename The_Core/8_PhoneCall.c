
/*
    Some phone usage rate may be described as follows:
    + first minute of a call costs min1 cents,
    + each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
    + each minute after 10th costs min11 cents.

    Ex: min1 = 3, min2_10 = 1, min11 = 2 and s = 20
        => output: 14
        the first minute costs 3 cents, which leaves you with 20 - 3 = 17 cents;
        the total cost of minutes 2 through 10 is 1 * 9 = 9, 
        so you can talk 9 more minutes and still have 17 - 9 = 8 cents;
        each next minute costs 2 cents, which means that you can talk 8 / 2 = 4 more minutes
        => expect output: 1 + 9 + 4 = 14

*/

#include<stdio.h>

int solution(int min1, int min2_10, int min11, int s) {
    int i;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    if (s >= min1) {
        sum1 = 1;
        s -= min1;
    } else {
        return 0;
    }
    if (s >= (min2_10 * 9)) {
        sum2 = 9;
        s -= (min2_10 * 9);
    } else {
        for (i = 1; i < s; i++) {
            if ((min2_10 * i) <= s) {
                sum2 = i;
            }
        }
        return sum1 + sum2;
    }
    sum3 = s / min11;
    return sum1 + sum2 + sum3;
}

int main() {
    int min1, min2_10, min11, s;
    scanf ("%d%d%d%d", &min1, &min2_10, &min11, &s);
    printf ("%d", solution(min1, min2_10, min11, s));
    return 0;
}