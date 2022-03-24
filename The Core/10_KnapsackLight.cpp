
/*
    You found two items in a treasure chest! The first item weighs weight1 and is worth value1, 
    and the second item weighs weight2 and is worth value2. What is the total maximum value 
    of the items you can take with you, assuming that your max weight capacity is maxW 
    and you can't come back for the items later?

    Ex: For value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, and maxW = 8, the output should be
        solution(value1, weight1, value2, weight2, maxW) = 10.

*/

#include<stdio.h>

int solution(int value1, int weight1, int value2, int weight2, int maxW) {
    if (maxW < weight1 && maxW < weight2) {
        return 0;
    }
    if ((weight1 + weight2) <= maxW) {
        return value1 + value2;    
    } else {
        if (maxW != weight1 && maxW != weight2) {
            if (value1 > value2) {
                return value1;
            } else {
                return value2;
            }
        }
        if (maxW < weight2 && maxW == weight1) {
            return value1;
        } else if (maxW < weight1 && maxW == weight2) {
            return value2;
        }
        if (value1 > value2 && maxW == weight1) {
            return value1;
        } else if (value1 > value2 && maxW == weight2) {
            return value1;
        } else if (value1 < value2 && maxW == weight1){
            return value2;
        } else if (value1 < value2) {
            if (maxW == weight1) {
                return value1;
            }
            return value2;
            
        }
    }
}

int main() {
    int value1, value2, weight1, weight2, maxW;
    scanf ("%d%d%d%d%d", &value1, &value2, &weight1, &weight2, &maxW);
    printf ("%d", solution(value1, value2, weight1, weight2, maxW));
    return 0;
}