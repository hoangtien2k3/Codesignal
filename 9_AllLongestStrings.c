/* 
    Given an array of strings, return another array containing all of its longest strings

    For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
    solution(inputArray) = ["aba", "vcd", "aba"].

*/

// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }

arr_string solution(arr_string inputArray) {
arr_string s = alloc_arr_string(inputArray.size);
    int i, j = 0, max = 0;

    for (int i = 0; i < inputArray.size; i++)
    {
        if (max < strlen(inputArray.arr[i]))
            max = strlen(inputArray.arr[i]);
    }

    for (int i = 0; i < inputArray.size; i++)
    {
        if (strlen(inputArray.arr[i]) == max)
            s.arr[j++] = inputArray.arr[i];
    }
    s.size = j;
    return s;

 