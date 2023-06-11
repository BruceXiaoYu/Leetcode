#include <stdio.h>
#include <string.h>

char *Themost_same(char *s, char *t, char *r);
int main()
{

    char roman0[10];
    char roman1[10];
    char roman2[10];

    char *st;
    scanf("%s", roman0);

    scanf("%s\n", roman1);

    scanf("%s", roman2);

    st = Themost_same(roman0, roman1, roman2);
    printf("same = %s\n", st);
    // printf("%s\n", roman1);
    // printf("%s\n", roman2);
    return 0;
}
char *Themost_same(char *s, char *t, char *r)
{
    char rt[20] = "", *res;

    int n = 0;
    for (unsigned long i = 0; i < strlen(s) - 1; i++)
    {
        for (unsigned long j = 0; j < strlen(t) - 1; j++)
        {
            for (unsigned long k = 0; k < strlen(r) - 1; k++)
            {
                if ((s[i] == t[j] && s[i] == r[k]) && (s[i + 1] == t[j + 1] && s[i + 1] == r[k + 1]))
                {
                    rt[n] = s[i];
                    rt[n + 1] = s[i + 1];
                    n += 2;

                    printf("n = %d\n", n);
                }
            }
        }
    }
    printf("rt = %s\n", rt);
    res = rt;
    return res;
}
