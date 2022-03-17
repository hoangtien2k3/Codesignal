
/*

*/

#include<stdio.h>
#include<math.h>

arr_integer solution(int lastNumberdays) {
    arr_integer a;

    if (lastNumberdays == 28 || lastNumberdays == 30) {
        a = alloc_arr_string(1);
        *a.arr = 31;
    } else {
        a = alloc_arr_string(3);
        *a.arr = 28;
        *(a.arr + 1) = 30;
        *(a.arr + 1) = 31;
    }
    return a;
}