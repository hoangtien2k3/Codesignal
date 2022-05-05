
// Arrays are already defined with this interface:
/*
  Example

  For a = [50, 60, 60, 45, 70], the output should be
  solution(a) = [180, 105].
  180 = 50 + 60 + 70 (cộng các phần tử lẻ)
  105 = 60 + 45 (cộng các phần tử chẵn)

*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    int size;
    int *arr;
} arr_integer;


arr_integer alloc_arr_integer(int len) {
    arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : NULL};
    return a;
}

arr_integer solution(arr_integer a) {
    arr_integer New = alloc_arr_integer(2);
    for(int i = 0; i < a.size; i++)
    {
        New.arr[i % 2] += a.arr[i];
    }
    return New;
}

int main() {
    arr_integer array;
    printf("Enter the size of array: ");
    scanf("%d", &array.size);
    printf("Enter the elements array array: ");
    for(int i=0; i < array.size; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &array.arr[i]);
    }

    arr_integer p = solution(array);
    for(int i = 0; i < 2; i++) {
        printf("%d ", p.arr[i]);
    }

    return 0;
}