/*
 * @Description: 测试链表的 增、删、查、改等功能
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-21 13:56:35
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-22 18:34:37
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

int main()
{
    List *list = createList();
    Ty arr[] = {2, 4, 6, 8, 1, 3, 5, 7, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    Node *s;
    printf("尾部插入");
    for (int i = 0; i < length; i++)
        insert_tail(list, arr[i]);
    showList(list);

    printf("头部插入");
    for (int i = 0; i < length; i++)
        insert_head(list, arr[i]);
    showList(list);

    printf("位置4插入10");
    insert_random(list, 10, 4);
    showList(list);

    printf("现在的链表节点数量：%d\n", list->_size);

    printf("头部删除");
    delete_head(list);
    showList(list);

    printf("尾部删除");
    delete_tail(list);
    showList(list);

    printf("位置4删除");
    delete_random(list, 4);
    showList(list);

    printf("位置3替换88");
    changeNode(list, 88, 3);
    showList(list);

    printf("查找88");
    s = findNode(list, 88);
    showList(list);
    printf("%d\n", s->data);

    showList(list);
    printf("头指针地址：%p  尾指针地址%p\n", list->head, list->tail);
    system("pause");

    return 0;
}