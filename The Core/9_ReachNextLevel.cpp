
/*
    * You are playing an RPG game. Currently your experience points (XP) total is equal to experience. 
    To reach the next level your XP should be at least at threshold. 
    If you kill the monster in front of you, you will gain more experience points in 
    the amount of the reward

    Given values experience, threshold and reward, check if you reach the next level 
    after killing the monster.

*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0
bool solution(int experience, int threshold, int reward) {
    return ((experience + reward) >= threshold) ? 1 : 0;
}

int main() {
    int experience, threshold, reward;
    scanf ("%d%d%d", &experience, &threshold, &reward);
    if (solution(experience, threshold, reward) == 1) {
        printf ("True");
    } else {
        printf ("False");
    }
    return 0;
}