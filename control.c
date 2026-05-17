/* 条件分岐とループ */

#include <stdio.h>

/*int main(void)
{
    int n;
    n = 8;
    if (n > 10)
    {
        printf("Big!\n");
    } else if (n == 20)
    {
        printf("Equal!\n");
    } else {
        printf("Small!\n");
    }
    return(0);
}
*/

/*int main(void)
{
    int n;
    n = 3;
    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }

    char word[] = "Tokyo";
    int i;
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
    char word[] = "Tokyo";
    int i;
    i = 0;

    while (word[i] != '\0')
    {
        if (word[i] == 'o')
        {
            i++;
            continue;
        }
        printf("%c\n", word[i]);
        i++;
    }
    return(0);
}
*/

/*int main(void)
{
    int i;
    i = 0;
    while (i < 5)
    {
        i++;
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return(0);
}
*/

/*int main(void)
{
    int i;
    i = 0;
    while (i < 5)
    {
        i++;
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    return(0);
}
*/

/*int main(void)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }

        printf("%d\n", i);
    }
    return(0);
}
*/

/*int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    
    //printf("%d\n", sum);
    if (a[i] >= 30)
    
        printf("%d\n", a[i]);
    }
    return(0);
}
*/

/*int main(void)
{
    int a[4] = {5, 10, 15, 20};
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }

    int i;
    for (i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return(0);
}
*/

/*int main(void)
{
    int a[3] = {2, 4, 6};
    int sum;
    int i;
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n", sum);
    return(0);
}
*/

int ft_strlen(char *str)
{
    int i;
    i = 0;
    int count;
    count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'o')
        {
            count++;
        }  
        i++;
        
    }
    return(count);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}
int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
/*int main(void)
{
    printf("%d\n", ft_strcmp("abc", "acd"));
}
*/

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

int main(void)
{
    char src[] = "42Tokyo";
    char dest[20];
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}
