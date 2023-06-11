#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool kuohao(char *s);
int main()
{
    bool res;
    char s[100];
    scanf("The input : %s", s);
    printf("your input is : %s\n", s);
    res = kuohao(s);
    if (res)
        printf("The result is true! :");
    else
        printf("The result is false! :");

    return 0;
}
bool kuohao(char *s)
{
    unsigned long lenth;
    lenth = strlen(s);
    int n = 0;
    if (lenth % 2 == 1)
        return false;
    else
    {
        for (unsigned long i = 0; i < lenth; i++)
        {
            if (s[i] == '(')
            {
                for (unsigned long j = lenth - 1; j > i; j--)
                {
                    if (s[j] == ')')
                    {
                        s[i] = 0;
                        s[j] = 0;
                        break;
                    }

                    /* code */
                }

                /* code */
            }
            else if (s[i] == '{')
            {
                for (unsigned long j = lenth - 1; j > i; j--)
                {
                    if (s[j] == '}')
                    {
                        s[i] = 0;
                        s[j] = 0;
                        break;
                    }

                    /* code */
                }
                /* code */
            }
            else if (s[i] == '[')
            {
                for (unsigned long j = lenth - 1; j > i; j--)
                {
                    if (s[j] == ']')
                    {
                        s[i] = 0;
                        s[j] = 0;
                        break;
                    }

                    /* code */
                }
                /* code */
            }
            else if (s[i] == 0)
            {
            }
            else
            {
                return false;
                break;
            }

            /* code */
        }
        for (int i = 0; i < (int)strlen(s); i++)
        {
            if (s[i] == '0')
            {
                n += 1;
                // printf("hhh");
            } /* code */
        }

        if (n == (int)strlen(s))
        {
            return true;
            /* code */
        }
        else
            return false;
    }
}
