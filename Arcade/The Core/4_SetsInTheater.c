
/*

*/

#include<stdio.h>

int solution(int nCols, int nRows, int col, int row) {
    return (nCols-col+1)*(nRows-row);
}

int main() {
    int nCols, nRows, col, row;
    scanf ("%d%d%d%d", &nCols, &nRows, &col, &row);
    printf ("%d", solution(nCols, nRows, col, row));
    return 0;
}




