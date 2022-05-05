
/*
    Reverse the order of the bits in a given integer.

    Example

    For a = 97, the output should be
    solution(a) = 67.

    97 equals to 1100001 in binary, which is 1000011 after mirroring, and that is 67 in base 10.

    For a = 8, the output should be
    solution(a) = 1.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int reverseBits(int n) {
    int rev = 0;
    rev = rev << 1;

    while (n > 0) {
        rev = rev << 1;
        if (n & 1 == 1)
            rev = rev ^ 1; 
        n = n >> 1;      
    }
    return rev;
}
 
int main() {
    int n ;
    scanf("%d", &n);

    printf("%d", reverseBits(n));


    return 0;
}