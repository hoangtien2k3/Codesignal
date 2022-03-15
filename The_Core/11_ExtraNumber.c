
/*
    You're given three integers, a, b and c. It is guaranteed that two of these 
    integers are equal to each other. What is the value of the third integer?

    Ex: For a = 2, b = 7, and c = 2, the output should be
        solution(a, b, c) = 7.

*/
#include<stdio.h>

int solution (int a, int b, int c) {
    return (a==b)?c:(a==c)?b:a;
    // return a^b^c; // cộng bit
}

int main() {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    printf ("%d", solution(a, b, c));
    return 0;
}

