#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
    /* data */
} Node;

typedef struct meregeTwolists
{
    Node *head;
    Node *tail;
    int list_size;
    /* data */
} List;

Node *createNode(int data, Node *text);
List *createList();
void _insert_tail(List *list, int data);
void showList(List *list);
List *meregeTwolists(List *list1, List *list2);

int main()
{
    int arr_first[] = {1, 2, 4};
    int length_1 = sizeof(arr_first) / sizeof(arr_first[0]);
    int arr_second[] = {1, 3, 4};
    int length_2 = sizeof(arr_second) / sizeof(arr_second[0]);

    List *list1 = createList();
    printf("合并前的列表");
    for (int i = 0; i < length_1; i++)
    {
        _insert_tail(list1, arr_first[i]);
        
    }
    showList(list1);

    List *list2 = createList();
    for (int i = 0; i < length_2; i++)
    {
        _insert_tail(list2, arr_second[i]);
        
    }
    showList(list2);

    printf("合并后的列表");
    List *list_ = createList();
    list_ = meregeTwolists(list1, list2);

    showList(list_);
    printf("链表的长度是: %d \n", list_->list_size);

    return 0;
}

Node *createNode(int data, Node *next)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    assert(newNode);
    newNode->data = data;
    newNode->next = next;
    return newNode;
}
List *createList()
{
    List *list = (List *)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->list_size = 0;
    return list;
}

void _insert_tail(List *list, int data)
{
    Node *newNode = createNode(data, NULL);
    if (list->list_size == 0)
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
    list->list_size++;
}

List *meregeTwolists(List *list1, List *list2)
{
    List *list3 = createList();

    while (true)
    {
        if (list1->list_size == 0)
        {
            list3->tail->next = list2->head;
            list3->tail = list2->tail;
            list2->head = NULL;
            list2->tail = NULL;
            list3->list_size = list3->list_size + list2->list_size;
            list2->list_size = 0;

            break;
            
        }
        if (list2->list_size == 0)
        {
            list3->tail->next = list1->head;
            list3->tail = list1->tail;
            list1->head = NULL;
            list1->tail = NULL;
            list3->list_size = list3->list_size + list1->list_size;
            list1->list_size = 0;

            break;
            
        }
        if (list1->head->data < list2->head->data)
        {
            if (list3->list_size == 0)
            {
                list3->head = list1->head;
                list3->tail = list1->head;
                list1->head = list1->head->next;
                list3->tail->next = NULL; 
                list3->list_size++;
                list1->list_size--;
            }
            else
            {
                list3->tail->next = list1->head;
                list3->tail = list1->head;
                list1->head = list1->head->next;
                list3->tail->next = NULL;
                list3->list_size++;
                list1->list_size--;
                
            }
        }
        else
        {
            if (list3->list_size == 0)
            {
                list3->head = list2->head;
                list3->tail = list2->head;
                list2->head = list2->head->next;
                list3->tail->next = NULL; 
                list3->list_size++;
                list2->list_size--;
            }
            else
            {
                list3->tail->next = list2->head;
                list3->tail = list2->head;
                list2->head = list2->head->next;
                list3->tail->next = NULL;
                list3->list_size++;
                list2->list_size--;
            }
        }
    }

    return list3;
}
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