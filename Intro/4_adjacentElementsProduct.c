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

int solution(arr_integer inputArray)
{ 
    int max = inputArray.arr[0] * inputArray.arr[1];
    for (int i = 1; i < inputArray.size - 1; i++)
    {
        int tich = inputArray.arr[i] * inputArray.arr[i + 1]; // phần tử liền kề nhau
        if (tich > max)
        {
            max = tich;
        }
    }
    return max;
}