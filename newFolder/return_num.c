// 2023.05.19 回文数09 
// 1.bool 函数用法，2.判别一个数的位数
#include <stdio.h>
#include <stdbool.h>

bool return_num(long int x);

int main()
{
    long int num;

    printf("input a number: ");
    scanf("%ld", &num);

    if (return_num(num))
        printf("The result is true!\n"); /* code */
    else
        printf("The result is false!\n");
}

bool return_num(long int x)
{
    long int nu, res = 0;
    nu = x;
    if (x < 0)
        return false;
    else
    {
        while (nu)
        {
            res = res * 10 + x % 10; /* code */
            nu = nu / 10;
        }
        if (res == x)
            return true; /* code */
        else
            return false;
    }
}