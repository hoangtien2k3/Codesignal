
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

