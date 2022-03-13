
/*
    => n children have got m pieces of candy. They want to eat as much candy as they can, 
    but each child must eat exactly the same amount of candy as any other child. 
    Determine how many pieces of candy will be eaten by all the children together. 
    Individual pieces of candy cannot be split.

    Ex: n = 3 and m = 10 => output: 9
        n = 4 and m = 4  => output: 4
        n = 4 and m = 15 => output: 12

    method: (m / n) * n
*/

#include<stdio.h> 

int solution (int n, int m) {
    return (m/n)*n;
}

int main() {
    int n, m;
    scanf ("%d%d", &n, &m);
    printf ("%d", solution(n, m));
    return 0;
}