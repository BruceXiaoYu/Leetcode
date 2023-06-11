#include <stdio.h>
#include <string.h>

int main()
{
    int arr_1[] = {1, 8, 9};
    int arr_2[] = {2, 6, 8};
    int length = (int)(sizeof(arr_1) / sizeof(arr_1[0]) + sizeof(arr_2) / sizeof(arr_2[0]));
    int arr[length];
    int n = 0;

    printf("length is :%d\n", length);
    for (int i = 0, j = 0; i + j < length;)
    {
        if (i <= 2 && j <= 2)
        {
            if (arr_1[i] < arr_2[j])
            {
                arr[n] = arr_1[i];
                i++;
                n++;
            }

            if (arr_1[i] > arr_2[j])
            {
                arr[n] = arr_2[j];
                j++;
                n++;
            }

            if (arr_1[i] == arr_2[j])
            {
                arr[n] = arr_1[i];
                arr[n + 1] = arr_2[j];
                j++;
                i++;
                n += 2;
            }
        }

        else if (i > 2)
        {
            arr[n] = arr_2[j];
            n++;
            j++;
        }

        else if (j > 2)
        {
            arr[n] = arr_1[i];
            n++;
            i++;
        }
    }

    printf("The arr's length is :%d\n", n);
    printf("The arr is :");

    for (int i = 0; i < length; i++)
        printf("%d  ", arr[i]);
}
