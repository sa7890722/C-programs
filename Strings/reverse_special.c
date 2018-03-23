#include <stdio.h>
#include <string.h>
#include <ctype.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char *str)
{
    char *p1 = str;
    char *p2 = str + strlen(str) - 1;
    while (p1 < p2)
    {
        while (!isalpha(*p1))
        p1++;
        while (!isalpha(*p2))
        p2--;
        if (p1 < p2)
        {
            swap(p1, p2);
            p1++;
            p2--;
        }
    }
}
int main(void)
{
    char str[6];
    strcpy(str, "a$bcd./fg+");
    reverse(str);
    printf("%s\n", str);
    return 0;
}
