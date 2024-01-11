#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This function should return 1 if x is prime and 0 otherwise */
int isPrime(int x) {
    if (x < 2) {
        return 0; // x is not prime
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0; // x is not prime
        }
    }
    return 1; // x is prime
}

/* This function should return 1 if gcd(x,2)=1 and 0 otherwise */
int isGcd1(int x) {
    return (x % 2 != 0); // Returns 1 if x is odd, 0 if x is even
}

/* This function should return 1 if 9^x-2 mod 5 = 2 and 0 otherwise */
int is2mod5(int x) {
    return ((int)pow(9, x) - 2) % 5 == 2;
}

int main(void) {
    int x;
    int p, q, r;

    printf("What number do you want to test?\n");
    scanf("%d", &x);
    printf("x is %d\n", x);

    p = isPrime(x);
    q = isGcd1(x);
    r = is2mod5(x);

    if ((p && !r) || !(p || !q || r) || (!p && !q && r)) {
        printf("You have found a valid x\n");
        printf("p is %d, q is %d, and r is %d\n", p, q, r);
    } else {
        printf("Try again!\n");
    }

    return EXIT_SUCCESS;
}
