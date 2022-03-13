
/*
    Consider integer numbers from 0 to n - 1 written down along the circle in such a way 
    that the distance between any two neighboring numbers is equal 
    (note that 0 and n - 1 are neighboring, too).

    Given n and firstNumber, find the number which is written in the radially 
    opposite position to firstNumber.


*/

#include<stdio.h>

int solution(int n, int firstNumber) {
    if (firstNumber < (n/2)) {
        return (n/2) + firstNumber;
    } else {
        return firstNumber-(n/2);
    }
}

int main()  {
    int n, firstNumber;
    scanf ("%d%d", &n, &firstNumber);
    printf ("%d", solution(n, firstNumber));
    return 0;
}