#include <stdio.h>

int main()
{
    int n = 0;
    unsigned long length_arr;
    int nu[] = {1, 1, 6, 6, 7, 8, 9, 9};
    length_arr = sizeof(nu) / sizeof(nu[0]);

    for (unsigned long i = 0; i < sizeof(nu) / sizeof(nu[0]) - 1 - n; i++)
        if (nu[i] == nu[i + 1])
        {
            for (unsigned long k = i; k < sizeof(nu) / sizeof(nu[0]) - 1 - n; k++)
                nu[k] = nu[k + 1];
            n += 1;
        }

    printf("有效的数字个数是： %d\t", (int)(length_arr - n));
    printf("nums = ");

    for (int j = 0; j < 8 - n; j++)
        printf("%d  ", nu[j]);

    return 0;
}
