/*
    Ticket numbers usually consist of an even number of digits.
    A ticket number is considered lucky if the sum of the first half of
    the digits is equal to the sum of the second half.

    Ex:
    For n = 1230, the output should be
    solution(n) = true;

    For n = 239017, the output should be
    solution(n) = false

*/

#define true 1
#define false 0

// Cách 1:
bool sizeNumber (int n) {
    int count = 0, sum = 0;
    for (; n != 0;)
    {
        count++;
        sum += n % 10;
        n /= 10;
    }
    if (sum % 2 != 0)
        return false;
}

bool solution(int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int count = 0, sum = 0, res;
    int m = n;
    sizeNumber(n);
    for ( ; n != 0 ; ) {
        count++;
        n = n / 10;
    }

    for (int i = 0; i < count / 2; i++)
    {   
        res = m % 10;
        sum1 += res;
        m /= 10;
    }
    for (int i = count / 2; i < count; i++)
    {
        res = m % 10;
        sum2 += res;
        m /= 10;
    }
    return (sum1 == sum2) ? true : false;
}



// Cách 2:

// bool solution(int n)
// {
//     int sum1 = 0;
//     int sum2 = 0;
//     int count = 0, tong = 0;
//     int m = n;
//     for (; n != 0;)
//     {
//         count++;
//         tong += n % 10;
//         n /= 10;
//     }

//     if (tong % 2 != 0)
//         return false;
//     for (int i = 0; i < count / 2; i++)
//     {    
//         sum1 += m % 10;
//         m /= 10;
//     }
//     for (int i = count / 2; i < count; i++)
//     {
//         sum2 += m % 10;
//         m /= 10;
//     }
//     return (sum1 == sum2) ? true : false;
// }



