
/*
    Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.
    Given two arrays a and b, check whether they are similar.

    Example
    For a = [1, 2, 3] and b = [1, 2, 3], the output should be
    solution(a, b) = true.

    The arrays are equal, no need to swap any elements.

    For a = [1, 2, 3] and b = [2, 1, 3], the output should be
    solution(a, b) = true.

    We can obtain b from a by swapping 2 and 1 in b.

    For a = [1, 2, 2] and b = [2, 1, 1], the output should be
    solution(a, b) = false.

    Any swap of any two elements either in a or in b won't make a and b equal.

*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct  {
    int size;
    int *arr;
} arr_integer;

bool solution(arr_integer a, arr_integer b) {
    int s1 = -1, s2 = -1;
    if (a.size != b.size) return false;
    for (int i = 0; i < a.size; i++) {
        if (a.arr[i] != b.arr[i]) {
            if (s1 == -1)
                s1 = i;
            else if (s2 == -1)
                s2 = i;
            else 
                return false;
        }
    }
    return (a.arr[s1] == b.arr[s2] && a.arr[s2] == b.arr[s1]);
}

int main() {

    arr_integer arr1;
    arr_integer arr2;

    printf("Enter the size of array a: ");
    scanf("%d", &(arr1.size));

    printf("\nEnter the elements array a:\n");
    for(int i=0; i < arr1.size; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &(arr1.arr[i]));
    }


    if (solution(arr1, arr2)) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}