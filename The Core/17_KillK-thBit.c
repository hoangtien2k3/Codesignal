
/*  Codesignal: the core\Kill k-th Bit
    
    For n = 37 and k = 3, the output should be
    solution(n, k) = 33.

    37(10) = 100101(2) ~> 100001(2) = 33(10).
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// int BinaryNumber(int decimalNumber) {
//     int count = 0, i = 0, binaryNumber = 0;
//     // int *arr = malloc(decimalNumber * sizeof(int));
//     while (decimalNumber != 0) {
//         binaryNumber += (decimalNumber % 2) * pow(10, i);
//         decimalNumber /= 2;
//         i++;
//     }
//     return binaryNumber;
// }

// int CountNumberBinary (int decimalNumber) {
//     int count = 0;
//     int x = BinaryNumber(decimalNumber);
//     while (x != 0) {
//         count++;
//         x /= 10;
//     }
//     return count;
// }

// int solution(int decimalNumber, int k) {
//     int x = BinaryNumber(decimalNumber);
//     int count = CountNumberBinary(decimalNumber);
//     for (int i=0; i<count; i++) {
//         if (i == k) {
//             if ()
//         }
//     }
// }



// int main(int argc, int *argv[]) {
//     int decimalNumber;
//     printf ("input binaryNumber: ");
//     scanf ("%d", &decimalNumber);


//     printf ("%d", BinaryNumber(decimalNumber));
//     printf ("\n%d", CountNumberBinary(decimalNumber));

// }


void BinaryNumber(int decimalNumber, int arr[]) {
    // int *arr = malloc(decimalNumber * sizeof(int));
    int i = 0;
    while (decimalNumber != 0) {
        arr[i] += (decimalNumber % 2) * pow(10, i);
        decimalNumber /= 2;
        i++;
    }

}

// int ResultBinary (int decimalNumber, int k) {
//     for (int i=0; i<count; i++) {
//         if (i == k) {
//             if (arr[i] == )
//         }
//     }
// }



int main() {
    int decimalNumber;
    int arr[10];
    int k;
    printf ("input decimalNumber = ");
    scanf ("%d", &decimalNumber);
    // printf ("Input k = ");
    // scanf("%d", &k);
    
    BinaryNumber(decimalNumber, arr);
    for (int i=0; i<6; i++) {
        printf ("%d ", arr[i]);
    }

    return 0;
}