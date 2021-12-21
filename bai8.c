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
//
//
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
