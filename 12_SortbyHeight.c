/*
    Some people are standing in a row in a park. There are trees between them which cannot be moved.
    Your task is to rearrange the people by their heights in a non-descending order without moving the trees.
    People can be very tall!

    For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
    solution(a) = [-1, 150, 160, 170, -1, -1, 180, 190].

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
// } interchange sort

arr_integer solution(arr_integer arr)
{
    for (int i = 0; i < arr.size - 1; i++)
    {
        for (int j = i + 1; j < arr.size; j++)
        {
            if (arr.arr[i] == -1 || arr.arr[j] == -1)
                continue;
            if (arr.arr[i] > arr.arr[j])
            {
                int temp = arr.arr[i];
                arr.arr[i] = arr.arr[j];
                arr.arr[j] = temp;
            }
        }
    }
    return arr;
}
