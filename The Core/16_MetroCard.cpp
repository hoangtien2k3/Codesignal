
/*

*/

#include<stdio.h>
#include<math.h>

typedef struct {
    
}


arr_integer solution(int lastNumberdays) {
    arr_integer days;
    if (lastNumberdays == 28 || lastNumberdays == 30) {
        arr_integer days = alloc_arr_integer(1);
        days.arr[0] = 31;
        return days;
    } else {
        arr_integer days = alloc_arr_integer(3);
        days.arr[0] = 28;
        days.arr[1] = 30;
        days.arr[2] = 31;
        return days;
    }
    return days;
}

