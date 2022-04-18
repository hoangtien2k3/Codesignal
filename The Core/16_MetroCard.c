
/*

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct {
    int arr[3];
} arr_integer;


arr_integer alloc_arr_integer(int len) {
    arr_integer a = {len, len > 0 ? malloc(sizeof(arr_integer) * len) : NULL};
    return a;
}

arr_integer solution(int lastNumDays) {
    arr_integer days;
    if (lastNumDays == 28 || lastNumDays == 30){
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

int main() {
    int lastNumDays;
    printf("Nhap vao lastNumDays: ");
    scanf("%d", &lastNumDays);
    
    arr_integer pa = solution(lastNumDays);
    for(int i=0; i<3; i++) {
        printf("%d ", pa.arr[i]);
    }

    return 0;
}

