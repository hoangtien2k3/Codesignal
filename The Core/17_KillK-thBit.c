
/*  Codesignal: the core\Kill k-th Bit
    
    For n = 37 and k = 3, the output should be
    solution(n, k) = 33.

    37(10) = 100101(2) ~> 100001(2) = 33(10).
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int Solution(int n, int k) {
    return n & ~(1 << (k - 1));
}

int main() {
    int n, k;
    printf("Input n = "); scanf("%d", &n);
    printf("Input k = "); scanf("%d", &k);
    printf("Solution(%d, %d) = %d", n, k, Solution(n, k));
    return 0;
}