/*
    Given matrix, a rectangular matrix of integers, where each value represents the cost of the room,
    your task is to return the total sum of all rooms that are suitable for the CodeBots
    (ie: add up all the values that don't appear below a 0).

    Ex:
    matrix= [[0, 1, 1, 2],
             [0, 5, 0, 0],
             [2, 0, 3, 3]]


*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

typedef struct 
{
    int size;
    int *arr[100][100];
} arr_arr_integer;

int solution(arr_arr_integer matrix)
{
    int cot = 0, hang = 0;
    int tong = 0;

    hang = matrix.size;
    cot = matrix.arr->size;
    for (int j = 0; j < cot; j++)
    {
        for (int i = 0; i < hang; i++)
        {
            if (matrix.arr[i].arr[j] != 0)
            {
                tong += matrix.arr[i].arr[j];
            }
            else
            {
                break;
            }
        }
    }
    return tong;
}

int main() {
    arr_arr_integer array;
    printf("Enter the size of array: ");
    scanf("%d", &array.size);
    printf ("Enter the elements array array: ");
    for(int i=0; i < array.size; i++) {
        scanf("%d", &array.arr[i]);
    }
    printf ("Tong: %d", solution(array));
    return 0;
}

