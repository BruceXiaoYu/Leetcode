/*
 * @Description:
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-25 17:40:02
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 17:49:20
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int int_num;
    printf("Please input a number:");
    scanf("%d", &int_num);
    for (int i = 0; i <= int_num / 2 + 1; i++)
    {
        if (i * i <= int_num & (i + 1) * (i + 1) > int_num)

        {
            printf("%d 的算术平方根是：%d\n",int_num,i);
            break;
        }
    }
    return 0;
}