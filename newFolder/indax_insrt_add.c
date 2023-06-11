/*
 * @Description:
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-25 21:05:50
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 21:45:51
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int insert_add(int *nums, int val, int length);
int main()
{
    int nums[] = {1, 3, 5, 6};
    int length = (int)sizeof(nums) / sizeof(nums[0]);
    int digital = 4;
    int add;
    add = insert_add(nums, digital, length);
    printf("%d\n", add);
}

int insert_add(int *nums, int val, int length)
{
    int add = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (val < nums[0])
        {
            add = 0;
            break;
        }

        else if (nums[i] == val)
        {
            add = i;
            break;
        }
        else if (nums[i] < val && nums[i + 1] > val)
        {
            add = i + 1;
            break;
        }
        else if (nums[length - 1] <= val)
        {
            add = length;
            break;
        }
    }
    return add;
}