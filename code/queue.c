#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

//全局和静态变量必须在函数中初始化
ListNode* head;
ListNode* tail;

void init() {
    head = tail = (ListNode*) malloc(sizeof(ListNode));
}


void push(int value) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->val = value;
    tail->next = node;
    node->next = NULL;

}

int pop(void) {
    ListNode* node = head->next;
    int ret ;
    if(node) {
        ret = node->val;
        head->next = node->next;
    }
    else{
        ret = NULL;
    }
    return ret;
}


int main() {
    init();
    push(2);
    //push(3);
    //push(29);
    printf("%d", pop());
    printf("%d", pop());
    return 0;
}
