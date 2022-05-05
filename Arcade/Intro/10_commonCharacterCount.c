/*
    Given two strings, find the number of common characters between them.

    For s1 = "aabcc" and s2 = "adcaa", the output should be
    solution(s1, s2) = 3
    
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define Min(a, b) a <= b ? a : b

int solution(char *s1, char *s2)
{
    int count = 0;
    int tab_s1[26];
    int tab_s2[26];
    for (int i = 0; i < 26; i++)
    {
        tab_s1[i] = 0; // cho các phân tử của mảng 1 = 0
        tab_s2[i] = 0; // cho các phần tử của mảng 2 = 0
    }

    for (int i = 0; i < 26; i++) 
    {
        tab_s1[s1[i] - 'a']++; // đếm xem có bao nhiêu ký tự từ a -> z trong bảng chữ cái English
    }
    for (int i = 0; i < 26; i++)
    {
        tab_s2[s2[i] - 'a']++; // đếm xem có bao nhiêu ký tự từ a -> z trong bảng chữ cái English
    }
    for (int i = 0; i < 26; i++)
    {
        if (tab_s1[i] > 0 && tab_s2[i] > 0)
        {
            count += Min(tab_s1[i], tab_s2[i]); // so sánh xem có bao nhiêu lý tự giống của mảng 1 và mảng 2
        }
    }
    return count;
}

int main(){
    char arr1[26];
    char arr2[26];
    printf("Enter the string1: ");
    fflush(stdin);
    gets(arr1);
    printf("Enter the string2: ");
    fflush(stdin);
    gets(arr2);

    printf("%d", solution(arr1, arr2));
    return 0;
}


