// 2023.05.18 两数之和01
// 1. 数组内元素个数 
#include <stdio.h>
int main()
{
    unsigned int nums[] = {2, 7, 11, 15};
    unsigned int i, j;
    unsigned int fi, se, target;
    fi = 5;
    printf("The nums are:");

    for (i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nPlease input one of the number:");

    scanf("%d", &target);

    for (i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
        for (j = i + 1; j < sizeof(nums) / sizeof(nums[0]); j++)
            if (nums[i] + nums[j] == target)
            {
                fi = i;
                se = j;
            }

    if (fi < 5)
        printf("The under_bumber is [%d,%d]\n", fi, se);
    else
        printf("Error!\n");
}