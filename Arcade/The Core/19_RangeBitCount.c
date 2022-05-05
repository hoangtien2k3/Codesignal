
/*
    You are given two numbers a and b where 0 ≤ a ≤ b. Imagine you construct an array of all the integers from a to b inclusive. 
    You need to count the number of 1s in the binary representations of all the numbers in the array.

    Example

    For a = 2 and b = 7, the output should be
    solution(a, b) = 11.

    Given a = 2 and b = 7 the array is: [2, 3, 4, 5, 6, 7]. Converting the numbers to binary, we get [10, 11, 100, 101, 110, 111], 
    which contains 1 + 2 + 1 + 2 + 2 + 3 = 11

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int solution(int a, int b) {
    int count = 0, j = 0;
    int *ptr = (int*) malloc((b-a+1) * sizeof(int));
    for(int i = a; i <= b; i++) {
        *(ptr + j) = i;
        j++;
    }
    for(int i = 0; i < (b-a+1); i++) {
        for(int j = 31; j >= 0; j--) {
            if (*(ptr + i) & (1 << j))
                count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    printf("Enter a, b: ");
    scanf("%d%d", &a, &b);
    printf("%d", solution(a, b));
    return 0;
}