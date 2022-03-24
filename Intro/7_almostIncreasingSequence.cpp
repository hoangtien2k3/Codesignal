/*
    Given a sequence of integers as an array, determine whether it is possible to obtain
    a strictly increasing sequence by removing no more than one element from the array.

    Ex:
    For sequence = [1, 3, 2, 1], the output should be
    solution(sequence) = false. 

    For sequence = [1, 3, 2], the output should be
    solution(sequence) = true. -> Loại bỏ con 3 thì mảng tăng dần
*/

#include<stdio.h>
#include<stdbool.h>

bool solution(arr_integer s)
{

    bool found = false;
    for (int i = 1; i < s.size; i++)
    {
        if (s.arr[i] <= s.arr[i - 1])
        {
            if (found)
            {
                return false;
            }
            found = true;
            if (i == 1 || i + 1 == s.size)
            {
                continue;
            }
            else if (s.arr[i] > s.arr[i - 2])
            {
                s.arr[i - 1] = s.arr[i - 2];
            }
            else if (s.arr[i - 1] >= s.arr[i + 1])
            {
                return false;
            }
        }
    }
    return true;
}


