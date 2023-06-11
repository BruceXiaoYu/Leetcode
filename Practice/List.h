/*
 * @Description:链表的增、删、查、改、打印函数 -- 以int型为例
 * @Autor: BruceXiaoYu
 * @Date: 2023-05-21 13:58:14
 * @LastEditors: BruceXiaoYu
 * @LastEditTime: 2023-05-22 20:38:05
 */
#pragma once
#define Ty int //整形为例

/**
 * @description: 节点的结构体描述
 * @return {*}
 * @author: BruceXiaoYu
 */
/**
 * @description:
 * @return {*}空
 * @author: BruceXiaoYu
 */
typedef struct Node
{
    Ty data;
    struct Node *next;
    /* data */
} Node;

// 链表的结构体描述，对接点再次进行封装
typedef struct List
{
    Node *head;
    Node *tail;
    int _size;
    /* data */
} List;

/**
 *  创建一个链表的节点
 * @description: 创建一个链表的节点
 * @param {Ty} data 节点内的整型数据
 * @param {Node} *next 新节点指向的指针
 * @return {Node*} 指向节点的指针
 * @author: BruceXiaoYu
 */
Node *createNode(Ty data, Node *next);

/**
 * 创建一个新的链表，空的 size == 0
 * @description:
 * @return {List*} 指向链表的指针
 * @author: BruceXiaoYu
 */
List *createList();

/**
 * 在链表的头部增加一个节点
 * @description:
 * @param {List} *list 指向链表的指针
 * @param {Ty} data 链表的数据
 * @return {*} none  还是指向这个链表的指针list
 * @author: BruceXiaoYu
 */
void insert_head(List *list, Ty data);

/**
 * 在链表尾部插入一个节点
 * @description:
 * @param {List} *list
 * @param {Ty} data
 * @return {*}
 * @author: BruceXiaoYu
 */
void insert_tail(List *list, Ty data);

/**
 * 在链表的指定位置插入一个节点
 * @description:
 * @param {List} *list
 * @param {Ty} data
 * @param {int} add
 * @return {*}
 * @author: BruceXiaoYu
 */
void insert_random(List *list, Ty data, int add);

/**
 * 在链表头部删除一个节点
 * @description:
 * @param {List} *list
 * @return {*}
 * @author: BruceXiaoYu
 */
void delete_head(List *list);

/**
 * 在链表尾部删除一个节点
 * @description:
 * @return {*}
 * @author: BruceXiaoYu
 */
void delete_tail(List *list);

/**
 * 在链表的指定位置删除这个节点 包含头部删除和尾部删除的情况
 * @description:
 * @param {List} *list
 * @param {int} add
 * @return {*}
 * @author: BruceXiaoYu
 */
void delete_random(List *list, int add);

/**
 * 在链表的指定位置增加一个节点
 * @description:
 * @param {List} *list
 * @param {Ty} data
 * @param {int} add
 * @return {*}
 * @author: BruceXiaoYu
 */
void changeNode(List *list, Ty data, int add);

/**
 * 给定一个数据寻找在链表中的节点
 * @description:
 * @return {*}
 * @author: BruceXiaoYu
 */
// 查
Node *findNode(List *list, Ty data);

/**
 * 从头到尾打印出链表的内容
 * @description:
 * @return {*}
 * @author: BruceXiaoYu
 */
void showList(List *list);
