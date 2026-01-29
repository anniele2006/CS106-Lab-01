#include <stdio.h>

/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void)
{
    return 1 << 31;
}

int test_tmin(void)
{
    return 0x80000000;
}

int main(void)
{
    printf("expected: %d\n", tmin());
    printf("actual  : %d\n", test_tmin());
}
