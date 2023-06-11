// 2023.05.19 罗马数字转整数13
// 1.字符串作为函数参数 2.转换规则！
#include <stdio.h>
#include <string.h>

static int romanToInt(char *s);

int main()
{
    int res;
    char roman[10];

    scanf("%s", roman);
    res = romanToInt(roman);
    printf("%d", res);
    return 0;
}

static int romanToInt(char *s)
{
    int res = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        switch (s[i])
        {
        case 'I':
            res += (res >= 5 ? -1 : 1);
            break;
        case 'V':
            res += 5;
            break;
        case 'X':
            res += 10 * (res >= 50 ? -1 : 1);
            break;
        case 'L':
            res += 50;
            break;
        case 'C':
            res += 100 * (res >= 500 ? -1 : 1);
            break;
        case 'D':
            res += 500;
            break;
        case 'M':
            res += 1000;
            break;
        }
    }
    return res;
}