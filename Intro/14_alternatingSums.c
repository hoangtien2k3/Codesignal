// Arrays are already defined with this interface:

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct arr_integer {
  int size;
  type *arr;
} arr_integer;

// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }

arr_integer solution(arr_integer a) {
    arr_integer New = alloc_arr_integer(2);
    for(int i = 0; i < a.size; i++)
    {
        New.arr[i % 2] += a.arr[i];
    }
    return New;
}

int main() {

}