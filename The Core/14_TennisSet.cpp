
/*
    In tennis, the winner of a set is based on how many games each player wins. 
    The first player to win 6 games is declared the winner unless their opponent 
    had already won 5 games, in which case the set continues until one of the 
    players has won 7 games.

    Given two integers score1 and score2, your task is to determine if it is possible 
    for a tennis set to be finished with a final score of score1 : score2

    Example:    For score1 = 3 and score2 = 6, the output should be
                solution(score1, score2) = true.

*/
#include<stdio.h>
#include<stdbool.h>

bool solution(int score1, int score2){
    if (score1==7 && score2==6||score1==6 && score2==7) return true;
    if (score1==7 && score2==5||score1==5 && score2==7) return true;
    if (score1==6 && score2<5||score1<5 && score2==6) return true;
    if (score1==6 && score2>5||score1>5 && score2==6) return false;
}

int main() {
    int score1, score2;
    scanf("%d%d", &score1, &score2);
    if (solution(score1, score2) == 0) {
        printf ("false");
    } else {
        printf ("true");
    }
    return 0;
}