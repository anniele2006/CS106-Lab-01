#include <stdio.h>

/* 
 * minusOne - return a value of -1 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int minusOne(void)
{
    return ~1 + 1;
}

int test_minusOne(void)
{
    return -1;
}

int main(void)
{
    printf("expected: %d\n", minusOne());
    printf("actual  : %d\n", test_minusOne());
}
