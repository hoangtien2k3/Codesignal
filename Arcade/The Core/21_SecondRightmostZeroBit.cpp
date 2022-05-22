
/*
    Presented with the integer n, find the 0-based position of the second rightmost zero bit in its binary representation (it is guaranteed that such a bit exists), counting from right to left.

    Return the value of 2position_of_the_found_bit.

    Example

    For n = 37, the output should be
    solution(n) = 8.

    3710 = 1001012. The second rightmost zero bit is at position 3 (0-based) from the right in the binary representation of n.
    Thus, the answer is 23 = 8.

*/

/*
You have to get rid of the rightmost 0: loại bỏ số 0 cuối cùng và thay bằng số 1
To fill in the rightmost 0 with 1 using x | (x + 1)
    10111100  (x)
|   10111101  (x + 1)
    --------
    10111101
Isolate the new rightmost 0
To isolate it use ~x & (x + 1)
now x is the value after step 1

    10111101  (x)
    --------
    01000010  (~x)
&   10111110  (x + 1)
    --------
    00000010
 in short 
  return ~(n|(n+1)) & ((n|(n+1))+1) ;
*/

#include<iostream>
#include<cmath>

int solution(int n) {
    return ~(n|(n+1))&((n|(n+1))+1);
}

// int solution(int n) {
//     return n | (n + 1); // thay đổi số 0 cuối cùng của bit nhị phân thành số 1
// }

// int solution(int n) {
//     return ~n & (n + 1);
// }

int main() {
    int n;
    std::cin >> n;
    std::cout << solution(n);
    return 0;

}