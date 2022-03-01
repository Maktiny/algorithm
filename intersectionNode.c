#include<stdio.h>
#include<stdlib.h>


struct ListNode {
  int val;
  struct ListNode* next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* pa = headA; //双指针，如果pa为空，则pa = headB 开始遍历。
    struct ListNode* pb = headB;
    if(pa == NULL || pb == NULL)
        return NULL;
    
    while(pa != pb){
        pa = pa != NULL ? pa->next : headB;
        pb = pb != NULL ? pb->next : headA;
    }
    return pa;
}

struct ListNode *getIntersectionNode2(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* pa = headA; //双指针，如果pa为空，则pa = headB 开始遍历。
    struct ListNode* pb = headB;
    int lena = 0;
    int lenb = 0;
    while(pa){
        lena++;
        pa = pa->next;
    }
     while(pb){
        lenb++;
        pb = pb->next;
    }
    int gap = abs(lena - lenb);
    pa = headA;
    pb = headB;

   struct ListNode * p;
    
    if(lena < lenb){
        p = pa;
        pa =pb;
        pb = p;
    }

    while(gap--){
        pa = pa->next;
    }

    while(pa){
        if(pa == pb)
           return pa;
        pa = pa->next;
        pb = pb->next;
    }
    return NULL;
}
int main(){
  struct ListNode *headA = (struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode * headB = (struct ListNode*)malloc(sizeof(struct ListNode));
  headA->val = 2;
  headB->val = 1;
  struct ListNode*p = headA;

  int a[2] = {6,4};
  int b[2] = {1,5};

  for(int i = 0; i < 2; i++){
    struct ListNode *te = (struct ListNode*)malloc(sizeof(struct ListNode));
    te->val = a[i];
    p->next = te;
    p = te;
  }
  p->next = NULL;
  struct ListNode *te = (struct ListNode*)malloc(sizeof(struct ListNode));
  te->val = 4;
  headB->next = te;
  headB->next->next = NULL;
  struct ListNode* ret = getIntersectionNode(headA, headB);
//  if(ret == NULL){
//   printf("No\n\t");
//  }
//  else{
    while(ret){
      printf("%d\n",ret->val);
      ret = ret->next;
    }
//  }
  return 0;
}
