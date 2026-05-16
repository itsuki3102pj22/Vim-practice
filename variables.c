/* 変数の操作 */

#include <stdio.h>

void hello(void)
{
    int a;
    a = 20;
    printf("%d\n", a);
}

int a = 42;

int main(void)
{
    /*const int a = 42;
    a = 50; //constで固定しているのでエラーになる
    printf("%d\n", a);
    hello();
    */

    char c;
    c = 66;
    printf("%c\n", c);

    return(0);
}
