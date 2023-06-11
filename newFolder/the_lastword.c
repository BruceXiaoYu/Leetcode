/*
 * @Description:
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-25 20:07:54
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 21:02:22
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char str[20];
    bool find = false;
    int n = 0;
    int m = 0;
    scanf("%[^\n]", str);
    for (int i = (int)strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == ' ' && find)
        {
            n = i;
            break;
        }
        else if (str[i] != ' ')
        {
            find = true;
            m++;
        }
    }
    for (int i = n + 1; i < n + 1 + m; i++)
    {
        printf("%c  ", str[i]);
    }
    printf("\n%d\n", m);
    printf("%lu\n", strlen(str));
}