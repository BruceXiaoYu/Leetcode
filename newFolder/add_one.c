/*
 * @Description:
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-25 17:52:27
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 18:34:49
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int *plusone(int *arr, int length);
int main()
{
    int digits[] = {9, 9, 9, 9, 9, 9};
    int *pinter;
    int length = (int)(sizeof(digits) / sizeof(digits[0]));
    pinter = plusone(digits, length);
    for (int i = 0; i <= length; i++)
    {
        printf("  %d ", pinter[i]); /* code */
    }

    return 0;
}
int *plusone(int *arr, int length)
{
    int *temp = (int *)malloc(sizeof(int *) * (length + 1));
    temp[0] = 0;
    for (int i = 0; i < length; i++)
    {
        temp[i + 1] = arr[i];
    }
    temp[length] = temp[length] + 1;
    for (int i = length; i > 0; i--)
    {
        if (temp[i] % 10 == 0)
        {
            temp[i] = 0;
            temp[i - 1] = temp[i - 1] + 1;
        }
        else
        {
            break;
        }
    }
    return temp;
}
