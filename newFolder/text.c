/*
 * @Description: 测试每一个小的函数的正确性
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-19 18:57:17
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-25 18:14:35
 */

#include <stdio.h>
int *removeElement(int *nums);
int main()
{
    int nums[] = {1, 5, 6, 4, 7, 8};
    int *q;
    q = removeElement(nums);
    printf("%d", q[1]);
}
int *removeElement(int *nums)
{
    nums[1] = 0;
    return nums;
}
