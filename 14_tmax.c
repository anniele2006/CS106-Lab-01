#include <stdio.h>

/* 
 * TMax - return maximum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
{
    return ~(1 << 31);
}

int test_tmax(void)
{
    return 0x7FFFFFFF;
}

int main(void)
{
    printf("expected: %d\n", tmax());
    printf("actual  : %d\n", test_tmax());
}
