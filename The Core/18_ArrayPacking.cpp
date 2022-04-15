
/*
    Ex: For a = [24, 85, 0], the output should be
    solution(a) = 21784.

    An array [24, 85, 0] looks like [00011000, 01010101, 00000000] in binary.
    After packing these into one number we get 00000000 01010101 00011000 
    (spaces are placed for convenience), which equals to 21784.

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct  {
    int arr[3];
} arr_integer;

int solution(arr_integer arr) {
    int number = 0, powCounter, module = 0;
    int length = sizeof(arr.arr) / sizeof(arr.arr[0]);
    for (int i = 0; i < length; i++) {
        powCounter = 8 * i;
        while(arr.arr[i]) {
            module = arr.arr[i] % 2;
            arr.arr[i] = arr.arr[i] >> 1;
            number = number + (module * (1 << powCounter));
            powCounter++;
        }
    }
    return number;
}

int main() {
    arr_integer array;
    int sizeArray;
    printf ("Enter the size the array: ");
    scanf ("%d", &sizeArray);
    printf ("Enter the elements in array: \n");
    for (int i=0; i < sizeArray; i++) {
        printf ("arr[%d] = ", i);
        scanf ("%d", &array.arr[i]);
    }

    int Result = solution(array);
    printf ("%d", Result);

    return 0;
}


