/*
    Ratiorg got statues of different sizes as a present from CodeMaster for his birthday,
    each statue having an non-negative integer size. Since he likes to make things perfect,
    he wants to arrange them from smallest to largest so that each statue will be bigger
    than the previous one exactly by 1. He may need some additional statues to be able
    to accomplish that. Help him figure out the minimum number of additional statues needed.

    Ex:
    For statues = [6, 2, 3, 8], the output should be
    solution(statues) = 3.
    + Ratiorg needs statues of sizes 4, 5 and 7.
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    int size;
    int arr[100];
} arr_integer;


int solution(arr_integer statues)
{
    int i, j, temp, sum = 0;
    for (int i = 0; i < statues.size - 1; i++)
    {
        for (j = i + 1; j < statues.size; j++)
        {
            if (statues.arr[i] > statues.arr[j])
            {
                temp = statues.arr[i];
                statues.arr[i] = statues.arr[j];
                statues.arr[j] = temp;
            }
        }
    }
    for (i = 0; i < statues.size - 1; i++)
    {
        sum += (statues.arr[i + 1] - statues.arr[i] - 1); // arr[1]-arr[0]-1
        // Ex: 4 ; 8 -> 8 - 4 - 1 = 3 | cần chèn thêm 3 bức tượng
    }
    return sum;
}


int main() {
    arr_integer array;
    printf ("Enter the size of array: ");
    scanf("%d", &array.size);
    printf ("Enter the elements in array: ");
    for(int i=0; i < array.size; i++) {
        scanf("%d", &array.arr[i]);
    }
    printf("Sum %d: ", solution(array));
    return 0;
}




/*
int solution(arr_integer s) {
    int max = s.arr[0];
    int min = s.arr[0];
    for(int i = 1; i < s.size; i++) {
        if(max < s.arr[i]) max = s.arr[i];
        if(min > s.arr[i]) min = s.arr[i];
    }
    return max - min - s.size + 1;
}
*/