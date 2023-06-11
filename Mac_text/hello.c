#include<stdio.h>
int main(){
    char name[100];
    printf("input you name :");
    scanf("%s",name);
    printf("hello ,%s\n",name);
    printf("hello ,%s",name);
}