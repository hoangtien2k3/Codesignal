#include<stdio.h>
#include<stdbool.h>


// #define true "1"
// #define false "0"
int sizeNumber(int n)
{
    int dem = 0;
    if (n < 10)
        return 1;
    for (; n != 0;)
    {
        dem++;
        n = n / 10; // loại bỏ số cuối cùng
        // dem++;          // đếm số ký tự, coi size của n bằng bao nhiêu
    }
    return dem;
}

bool isLucky(int n)
{
    int t;
    int s1 = 0;
    int s2 = 0;
    // divideNumber(n);
    for (int i = 0; i < sizeNumber(n) / 2; i++)
    {
        t = n % 10;
        s1 = s1 + t;
        n = n / 10;
    }
    for (int i = 0; i < sizeNumber(n) / 2; i++)
    {
        t = n % 10;
        s2 = s2 + t;
        n = n / 10;
    }

    return (s1 == s2) ? true : false;
}

int main() {
    int n, dem = 0;
    scanf ("%d", &n);
    printf ("%d",isLucky(n));
    // isLucky(n);

    return 0;
}