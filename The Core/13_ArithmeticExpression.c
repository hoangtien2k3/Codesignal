
/*
    Consider an arithmetic expression of the form a#b=c. Check whether 
    it is possible to replace # with one of the four signs: +, -, * or / to obtain 
    a correct expression.

    Example:    For a = 2, b = 3, and c = 5, the output should be
                solution(a, b, c) = true.
                We can replace # with a + to obtain 2 + 3 = 5, so the answer is true.


*/

#include<stdio.h>
#include<stdbool.h>

bool solution(int a, int b, int c) {
    // return (a+b==c)?true:(a-b==c)?true:(a*b==c)?true:((float)a/b==c)?true:false;
    return a+b==c || a-b==c || a*b==c || a==b*c;
}

int main() {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    if (solution(a, b, c) == 0){
        printf ("false");
    } else {
        printf ("true");
    }
    return 0;
}