#include<bits/stdc++.h>

using namespace std;

//有两个升序链表， 合并成一个递减链表：头插法
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* merge(ListNode* s1, ListNode* s2) {
    ListNode* l1 = s1, *l2 = s2;
    ListNode* p = nullptr, *tem = nullptr;

    while(l1 && l2) {
        if(l1->val < l2->val) {//比较元素大小，把小的插入链表的头， 开始的时候，链表的头P节点是空
            tem = l1->next;
            l1->next = p;//头插法的关键(p 是当头结点)
            p = l1;
            l1 = tem;
        }
        else{
            tem = l2->next;
            l2->next = p;
            p = l2;
            l2 = tem;
        }
    }

    while(l2 != nullptr) {
        tem = l2->next;
        l2->next = p;
        p = l2;
        l2 = tem;
    }

    while(l1 != nullptr) {
        tem = l1->next;
        l1->next = p;
        p = l1;
        l1 = tem;
    }
    return p;
}


int main () {
    vector<int>t1 = {1,6,9, 10};
    vector<int>t2 = {2, 4, 8, 15};
    ListNode* sn1 = new ListNode(-100);
    ListNode* sn2 = new ListNode(-200);
    ListNode* s1 = sn1, *s2 = sn2;
    for(int i = 0; i < 4; ++i) {
        ListNode* node1 = new ListNode(t1[i]);
        s1->next = node1;
        s1 = node1;

        ListNode* node2 = new ListNode(t2[i]);
        s2->next = node2;
        s2 = node2;
        
    }
    ListNode* ret = merge(sn1->next, sn2->next);

    while(ret != nullptr) {
        cout<<ret->val<<" ";
        ret = ret->next;
    }
return 0;
}
