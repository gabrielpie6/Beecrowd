#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define ITERATIONS 5

bool MillerRabin(int64_t n);
bool check_composite(int64_t n, int64_t a, int64_t d, int s);
int64_t binpower(int64_t base, int64_t e, int64_t mod);

int main()
{
    int N, i;
    int number;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &number);
        if (MillerRabin((int64_t) number))
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}

int64_t binpower(int64_t base, int64_t e, int64_t mod) {
    int64_t result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (int64_t)result * base % mod;
        base = (int64_t)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(int64_t n, int64_t a, int64_t d, int s) {
    int64_t x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (int64_t)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

/// @brief Returns true if n is probably prime, else returns false. Verification accuracy rises with greater ITERATIONS values
/// @param int64_t 64 bits integer
/// @result true or false
bool MillerRabin(int64_t n)
{
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    int64_t d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < ITERATIONS; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}