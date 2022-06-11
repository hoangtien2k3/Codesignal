
/*
    Call two arms equally strong if the heaviest weights they each are able to lift are equal.

    Call two people equally strong if their strongest arms are equally strong (the strongest arm can be both the right and the left), and so are their weakest arms.

    Given your and your friend's arms' lifting capabilities find out if you two are equally strong.


Example:
    * For yourLeft = 10, yourRight = 15, friendsLeft = 15, and friendsRight = 10, the output should be
    solution(yourLeft, yourRight, friendsLeft, friendsRight) = true;

    * For yourLeft = 15, yourRight = 10, friendsLeft = 15, and friendsRight = 9, the output should be
    solution(yourLeft, yourRight, friendsLeft, friendsRight) = false.
*/


#include<stdio.h>
#include<stdbool.h>

bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    if ((yourLeft == friendsLeft || yourLeft == friendsRight) && (yourRight == friendsLeft || yourRight == friendsRight)) return true;
    else return false;
}

int main() {
    int yourLeft, yourRight, friendsLeft, friendsRight;
    scanf("%d%d%d%d", &yourLeft, &yourRight, &friendsLeft, &friendsRight);
    if (solution(yourLeft, yourRight, friendsLeft, friendsRight)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}