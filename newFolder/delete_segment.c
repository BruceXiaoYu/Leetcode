/*
 * @Description:
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-22 20:39:53
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 17:39:10
 */
#include <stdio.h>
static int length = 8;
int removeElement(int *nums, int val);
void move_tail(int *nums, int num);
void cover(int *nums, int num);

int main()
{
    printf("length in hind ====== %d\n", length);
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    static int length = sizeof(nums) / sizeof(nums[0]);
    printf("length ====== %d\n", length);

    length = removeElement(nums, 2);
    printf("length ====== %d\n", length);

    for (int i = 0; i < 8; i++)
    {
        printf("%d  ", nums[i]);
    }
}
int removeElement(int *nums, int val)
{
    int temp = 0;
    int n = 0;
    printf("length in remove  ====== %d\n", length);
    for (int i = 0; i < length - n; i++)
    {
        if (nums[i] == val)
        {
            cover(nums, i);
            n += 1;
            i--;
        }
    }
    printf("length in tail ====== %d\n", length);
    return length - n;
}
/**
 * 把当前数据移动到最后
 * @description:
 * @param {int} *nums
 * @param {int} num
 * @return {*}
 * @author: BruceXiaoYu
 */

void move_tail(int *nums, int num)
{
    int temp;
    for (int k = num; k < length - 1; k++)
    {
        temp = nums[k];
        nums[k] = nums[k + 1];
        nums[k + 1] = temp;
    }
}
/**
 * 把当前位置后面的数据向前覆盖
 * @description:
 * @param {int} *nums
 * @param {int} num
 * @return {*}
 * @author: BruceXiaoYu
 */
void cover(int *nums, int num)
{
    for (int k = num; k < length - 1; k++)
    {
        nums[k] = nums[k + 1];
    }
}