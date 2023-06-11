#include <stdio.h>
#include <string.h>

static int romanToInt(char *s);

int main()
{
    int res;
    char roman[100];
    scanf("%s", roman);
    res = romanToInt(roman);
    printf("%d\n", res);
    return 0;
}

static int romanToInt(char *s){
    return strlen(s);
}