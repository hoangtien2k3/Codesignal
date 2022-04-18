
/*
    Given a rectangular matrix of characters, add a border of asterisks(*) to it.

    EX: iNPUT: picture = ["abc",
                         "ded"]

        OUTPUT: solution(picture) = ["*****",
                                    "*abc*",
                                    "*ded*",
                                    "*****"]

*/

// Arrays are already defined with this interface:
// typedef struct arr_string {
//     int size;
//     type *arr;
// } arr_string;

// arr_string alloc_arr_string(int len) {
//     arr_string a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//     return a;
// }
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct 
{   
    int size;
    char arr[100];
} arr_string;


arr_string solution(arr_string picture) {
    int new_str_len = strlen(picture.arr[0])+2;
    int new_str_size = picture.size + 2;
    arr_string str_border = alloc_arr_string(new_str_size);

    for(int i=0; i<new_str_size; i++){
        str_border.arr[i] = (char*) malloc(sizeof(char)*(new_str_len+1));
        if(i==0 || i==new_str_size-1){
            memset(str_border.arr[i],'*',new_str_len);
        }
        else{
            sprintf(str_border.arr[i], "*%s*", picture.arr[i-1]);
        }
    }
    
    return str_border;
}


int main() {
    arr_string str;
    printf("Enter the size of string: ");
    scanf("%d", &str.size);

    printf("Enter string: ");
    gets(str.arr);


    return 0;
}

