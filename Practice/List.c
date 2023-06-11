/*
 * @Description: 单链表的增、删、查、改算法
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-21 13:58:23
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-22 20:32:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

//创建一个新的节点
Node *createNode(Ty data, Node *next)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    assert(newNode);
    newNode->data = data;
    newNode->next = next;
    return newNode;
}

//创建一个新的链表
List *createList()
{
    List *list = (List *)malloc(sizeof(List));
    assert(list);
    list->head = NULL;
    list->tail = NULL;
    list->_size = 0;
    return list;
}

//头部增加节点
void insert_head(List *list, Ty data)
{
    Node *newNode = createNode(data, NULL);
    if (list->_size == 0)
    {
        newNode->next = list->head;
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        newNode->next = list->head;
        list->head = newNode;
    }
    list->_size++;
}

//在链表尾部增加一个节点
void insert_tail(List *list, Ty data)
{
    Node *newNode = createNode(data, NULL);
    if (list->_size == 0)
    {
        newNode->next = list->head;
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->_size++;
}

/**
 * 在链表的指定位置增加一个节点，包括头部和尾部情况
 * @description:
 * @param {List} *list
 * @param {Ty} data
 * @param {int} add 链表增加节点的位置
 * @return {*}
 * @author: BruceXiaoYu
 */
void insert_random(List *list, Ty data, int add)
{
    Node *newNode = createNode(data, NULL);
    if (list->_size == 0)
    {
        newNode->next = list->head;
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        if (add == 0)
        {
            newNode->next = list->head;
            list->head = newNode;
        }
        else if (add == list->_size)
        {
            list->tail->next = newNode;
            list->tail = newNode;
        }
        else
        {
            Node *pMove = list->head;
            for (int i = 0; i < add - 1; i++)

                pMove = pMove->next;

            newNode->next = pMove->next;
            pMove->next = newNode;
        }
    }
    list->_size++;
}

// 在头部删除
void delete_head(List *list)
{
    if (list->_size == 0)
    {
        printf("error!");
        return;
    }
    else if (list->_size == 1)
    {
        list->tail = NULL;
        free(list->head);
        list->head = NULL;
        list->_size--;
        return;
    }
    else
    {
        Node *pMove = list->head;
        list->head = list->head->next;
        pMove->next = NULL;
        free(pMove);
        list->_size--;
        return;
    }
}

// 在尾部删除
void delete_tail(List *list)
{
    if (list->_size == 0)
    {
        printf("error!");
        return;
        /* code */
    }
    else if (list->_size == 1)
    {
        list->head = NULL;
        free(list->tail);
        list->tail = NULL;
        list->_size--;
        return;
    }
    else
    {
        Node *pMove = list->head;
        for (int i = 0; i < list->_size - 1 - 1; i++)
            pMove = pMove->next;
        list->tail = pMove;
        free(pMove->next);
        pMove->next = NULL;
        list->_size--;
        return;
    }
}

// 在任意位指定删除
void delete_random(List *list, int add)
{
    if (list->_size == 0)
    {
        printf("error!");
        return;
    }
    else if (list->_size == 1)
    {
        list->head = NULL;
        free(list->tail);
        list->tail = NULL;
        list->_size--;
    }
    else
    {
        if (add == 1)
        {
            delete_head(list);
        }
        else if (add == list->_size)
        {
            delete_tail(list);
            return;
        }
        else
        {
            Node *pMove = list->head;
            for (int i = 0; i < add - 1 - 1; i++)

                pMove = pMove->next;

            Node *qMove = pMove->next;
            pMove->next = pMove->next->next;
            qMove->next = NULL;
            free(qMove);
            list->_size--;
            return;
        }
    }
}

// 改
void changeNode(List *list, Ty data, int add)
{
    if (list->_size == 0)
    {
        printf("error!");
        return;
    }
    else
    {

        Node *pMove = list->head;
        for (int i = 0; i < add - 1; i++)
            pMove = pMove->next;
        pMove->data = data;
    }
}

// 查
Node *findNode(List *list, Ty data)
{
    if (list->_size == 0)
    {
        printf("error!");
        return NULL;
    }
    else
    {
        Node *pMove = list->head;
        for (int i = 0; i < list->_size - 1; i++)
        {
            if (pMove->data == data)
                return pMove;
            pMove = pMove->next;
        }
        return NULL;
    }
}

// 打印出链表的内容---以整形变量为例
void showList(List *list)
{
    Node *pMove = list->head;
    printf("\n------------------------------\n");
    while (pMove)
    {
        printf("%d  ", pMove->data);
        pMove = pMove->next;
    }
    printf("\n------------------------------\n");
}