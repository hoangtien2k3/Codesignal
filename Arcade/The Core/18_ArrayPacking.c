
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
    int size;
    int *arr;
} arr_integer;

int *alloc_arr_integer(int len) {
    // arr_integer *a = {len, len > 0 ? malloc(sizeof(arr_integer) * len) : NULL};
    int *a = (int*) malloc(len * sizeof(int));
    return a;
}

int solution(arr_integer a) {
    int number = 0, powCounter, module = 0;

    a.arr = alloc_arr_integer(a.size);

    for (int i = 0; i < a.size; i++) {
        powCounter = 8 * i;
        while((a.arr + i)) {
            module = (int)(a.arr + i) % 2;
            (int)(a.arr + i) = (int)(a.arr + i) >> 1;
            number = number + (module * (1 << powCounter));
            powCounter++;
        }
    }
    return number;
}

int main() {
    arr_integer array;
    printf ("Enter the size the array: ");
    scanf ("%d", &array.size);
    printf ("Enter the elements in array: \n");
    for (int i=0; i < array.size; i++) {
        printf ("arr[%d] = ", i);
        scanf ("%d", &array.arr[i]);
    }

    int Result = solution(array);
    printf ("%d", Result);

    return 0;
}




