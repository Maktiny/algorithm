#include<bits/stdc++.h>

using namespace std;

#define capacity 100

typedef struct ListNode {
	int val;
	ListNode* pre;
	ListNode* next;
        ListNode(int val) : val(val), pre(nullptr), next(nullptr){};
        ListNode(int val, ListNode* pre, ListNode* next) : val(val), pre(pre), next(next){};
} ListNode;

static int num ;
ListNode* head;
ListNode* tail;

void init() {
    head = new ListNode(INT_MIN);
    tail = head;
}

void enqueue(int val) {
    if(num == capacity) {
        cout<<"the queue is full";
        return;
    }
    else{
        ListNode* node  = new ListNode(val);
        node->pre = tail;
        node->next = nullptr;
        tail->next = node;
        tail = node;
        head->pre = tail;
        tail->next = head;
        ++num;
    }
    
}

int dequeue() {
    if(num == 0) {
        cout<<"the queue is empty";
        return INT_MIN;
    }
    else{
        ListNode* node = head->next;
        head->next = node->next;
        node->next->pre = head;
        --num;
    
    return node->val;
    }
}

bool empty(){
    if(tail == head){
        return true;
    }
    else{
        return false;
    }
}

bool full() {
    if(num == capacity) {
        return true;
    }
    else{
        return false;
    }
}


//stack
void push(int val) {
    if(num == capacity) {
        cout<<"the stck is full";
        return;
    }
    else{
        ListNode* node = new ListNode(val);
        tail->next = node;
        node->pre = tail;
        tail = node;
        head->pre = tail;
        tail->next = head;
    }
}

int pop() {
    if(num == 0){
        cout<<"the stack is empty!";
        return -1;
    }
    else{
        ListNode* node = tail;
        head->pre = node->pre;
        node->pre->next = nullptr;
        --num;
        return node->val;
    
    }
}

bool stack_empty(){
    if(tail == head) {
        return true;
    }
    else{
        return false;
    }
}

bool stack_full() {
    if(num == capacity){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    init();
    num = 0;
    vector<int>ret;
   for(int i = 0; i < 4; ++i) {
        ret.push_back(i);
    }


    for(int i = 0; i < 4; ++i) {
        enqueue(ret[i]);
    }
    for(int i = 0; i < 4; ++i) {
        int tem = dequeue();
        cout<<tem<<" ";
    }



    return 0;
}
