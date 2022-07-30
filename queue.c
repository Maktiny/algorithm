#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;


ListNode* head;
ListNode* tail;

void init(void) {
    head = (ListNode *) malloc(sizeof(ListNode));
    tail = head;
}

void enqueue(int value) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->val = value;
    tail->next = node;
    tail = node;
}

int dequeue(void) {
    ListNode* node = head->next;
    head->next = node->next;
    int ret = node->val;
    free(node);
    return ret;
}


int main() {
    init();
    enqueue(2);
    enqueue(4);
    enqueue(8);
    enqueue(20);
    int ret = dequeue();

    ListNode* node = head->next;
    while(node) {
        printf("%d", node->val);
        node = node->next;
    }
    printf("%d", ret);
    return 0;

}
