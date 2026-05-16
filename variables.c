/* 変数の操作 */

#include <stdio.h>

int main(void)
{
    const int a = 42;
    a = 50; /* constで固定しているのでエラーになる*/
    printf("%d\n", a);

    return(0);
}
