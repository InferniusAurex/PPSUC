#include <stdio.h>

int main()
{
    int n, primeYN, i;
    scanf("%d", &n);
    primeYN = 1;

    if (n < 2) {
        primeYN = 0;
    }
    else {
        for (i = 2; i < n; i++) {  // logic loop until i=n
            if (n % i == 0) {
                primeYN = 0;
                break;
            }
        }
    }

    if (primeYN == 1) {
        printf("Prime\n");
    }
    else {
        printf("Not a Prime\n");
    }

    return 0;
}


// if number <2 it is not a prime for sure
// 