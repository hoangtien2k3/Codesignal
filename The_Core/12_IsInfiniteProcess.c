
/*
    Given integers a and b, determine whether the following pseudocode results in an infinite loop

    + while a is not equal to b do
        increase a by 1
        decrease b by 1

    . For a = 2 and b = 6, the output should be
    solution(a, b) = false;
    . For a = 2 and b = 3, the output should be
    solution(a, b) = true.

*/

#include<stdio.h>
#include<stdbool.h>

bool solution(int a, int b)
{
    return (b<a)?true:((b-a)%2==0)?false:true;
}

int main() {
    int a, b;
    scanf ("%d%d", &a, &b);
    if (solution(a, b)) {
        printf ("true");
    } else {
        printf ("false");
    }
    return 0;
}