/* 配列の基礎 */

#include <stdio.h>

/*int main(void)
{
    int a[3];
    int i;

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    i = 0;
    while (i < 3)
    {
        printf("%d\n", a[i]);
        i++;
    }

    return(0);
}
*/

/*int main(void)
{
    char word[5];
    int i;

    word[0] = 'H';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';

    i = 0;
    while (i < 5)
    {
        printf("%c\n", word[i]);
        i++;
    }
    
    return(0);
} 
*/

/*int main(void)
{
    char word[] = "Hello";
    printf("%s\n", word);

    return(0);
}
*/

/*int main(void)
{
    int i;
    char word[] = "Hello";

    i = 0;
    while (word[i] != '\0')
    {
        printf("%c\n", word[i]);
        i++;
    }

    return(0);
}
*/

/*int main(void)
{
    int i;
    char word[] = "42";

    i = 0;

    while (word[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i);

    return(0);
}
*/


/*int main(void)
{
    char word[] = "Hello";
    printf("%c\n", word[1]);

    return(0);
}
*/

int main(void)
{
    char word[] = "Hello";
    word[0] = 'Y';
    printf("%s\n", word);

    return(0);
}
