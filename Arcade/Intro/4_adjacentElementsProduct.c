/*
    Given an array of integers, find the pair of adjacent elements
    that has the largest product and return that product.

    For inputArray = [3, 6, -2, -5, 7, 3], the output should be
    solution(inputArray) = 21.
    7 and 3 produce the largest product.

*/

#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{   
    int size;
    int arr[100];
} arr_integer;

int solution(arr_integer inputArray)
{
    int arrLength = inputArray.size;
    int max = inputArray.arr[0] * inputArray.arr[1];
    for (int i = 1; i < inputArray.size - 1; i++)
    {
        if (inputArray.arr[i] * inputArray.arr[i + 1] > max)
        {
            max = inputArray.arr[i] * inputArray.arr[i + 1];
        }
    }
    return max;
}


int main()
{
    arr_integer array;
    printf("Enter size of the array: ");
    scanf("%d", &array.size);
    printf("Enter the elements in array: ");
    for (int i = 0; i < array.size; i++)
    {
        scanf("%d", &array.arr[i]);
    }
    printf("Max is %d", solution(array));
    return 0;
}



