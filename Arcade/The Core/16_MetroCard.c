
/*
    You just bought a public transit card that allows you to ride the Metro for a certain number of days.

    Here is how it works: upon first receiving the card, the system allocates you a 31-day pass, which equals the number of days in January. 
    The second time you pay for the card, your pass is extended by 28 days, i.e. the number of days in February (note that leap years are not considered), 
    and so on. The 13th time you extend the pass, you get 31 days again.

    You just ran out of days on the card, and unfortunately you've forgotten how many times your pass has been extended so far. 
    However, you do remember the number of days you were able to ride the Metro during this most recent month. 
    Figure out the number of days by which your pass will now be extended, and return all the options as an array sorted in increasing order.

    EXAMPLE:
    For lastNumberOfDays = 30, the output should be
    solution(lastNumberOfDays) = [31].

    There are 30 days in April, June, September and November, so the next months to consider are May, July, October or December. 
    All of them have exactly 31 days, which means that you will definitely get a 31-days pass the next time you extend your card.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct {
    int *arr;
} arr_integer;

arr_integer *alloc_arr_integer(int len) {
    arr_integer *a = (arr_integer*) malloc(len * sizeof(arr_integer)); 
}

arr_integer *solution(int lastNumDays) { 
    arr_integer *a; 
    if (lastNumDays == 28 || lastNumDays == 30) {
        a = alloc_arr_integer(1);
        *(a->arr) = 31;
    } else {
        a = alloc_arr_integer(3);
        *(a->arr) = 28;
        *(a->arr + 1) = 30;
        *(a->arr + 2) = 31;
    }
    return a; 
}

int main() {
    int lastNumDays;
    printf("Nhap vao lastNumDays: ");
    scanf("%d", &lastNumDays);

    arr_integer *pa = solution(lastNumDays);
    if (*(pa->arr + 0) == 31) {
        printf("%d", *(pa->arr + 0));
    } else {
        for (int i=0; i<3; i++) {
            printf("%d ", *(pa->arr + i));
        }
    }
    
    return 0;
}

