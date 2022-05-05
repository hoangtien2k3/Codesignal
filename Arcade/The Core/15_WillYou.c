
/*
    Codesignal\thecore\15_WillYou?
*/

#include<stdio.h>
#include<stdbool.h>

bool solution(bool young, bool beautiful, bool loved) {
    // if((young && beautiful) && !loved)
    //     return true;
    // else if(loved &&(!young||!beautiful))
    //     return  true;
    // return false;
    return (young && beautiful) != loved;
}

int main() {
    int young, beautiful, loved;
    printf("Nhap vao young, beautiful, loved (1 or 0): ");
    scanf("%d%d%d", young, beautiful, loved);
    printf("%d" , solution(young, beautiful, loved));  

    return 0;
}

