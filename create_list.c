#include<stdio.h>
#include<stdlib.h>

typedef struct {
     int val;
  struct MyLinkedList *next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
MyLinkedList *ret = (MyLinkedList*)malloc(1*sizeof(MyLinkedList));
return ret;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
   if(obj == NULL)
      return -1;
   
   if(index == 0)
      return obj->val;

   while(obj != NULL && index > 0){
     obj = obj->next;
     index--;
   }
   if(obj == NULL)
    return -1;
   else
     return obj->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
  MyLinkedList *add = (MyLinkedList*)malloc(1*sizeof(MyLinkedList));
  add->next = obj;

  obj = add;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
   MyLinkedList *add = (MyLinkedList*)malloc(1*sizeof(MyLinkedList));
   MyLinkedList * p;
   while(obj != NULL){
     p = obj;
     obj = obj->next;
   }
   p->next = add;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
  MyLinkedList *add = (MyLinkedList*)malloc(1*sizeof(MyLinkedList));
   
  if(index <= 0){
    myLinkedListAddAtHead(obj, val);
  }

  MyLinkedList* p = obj;

  while(obj != NULL && index > 0){
    p = obj;
    obj = obj->next;
    index--;
  }

  if(obj != NULL){ //index小于链表长度
    if(obj->next == NULL){//尾部插入
      obj->next = add;
    }
    else{
      p->next = add;
      add->next = obj;
    }
  }

}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
  if(index == 0 && obj->next == NULL){
    free(obj);
    return;
  }//只有一个节点
  
  MyLinkedList* p = obj;
  //删除第一个节点
  if(index == 0){
    p = p->next;
    free(obj);
    obj = p;
    return;
  }
  
  //MyLinkedList* p = obj;

  while(obj != NULL && index > 0){
    p = obj;
    obj = obj->next;
    index--;
  }
  if(obj->next == NULL){//删除尾节点
    free(obj);
    return;
  }
  else{
    p->next = obj->next;
  }


}

void myLinkedListFree(MyLinkedList* obj) {
  MyLinkedList * p; 
  while(obj){
    p = obj->next;
    free(obj);
    obj = p;
  }

}


int main(){
MyLinkedList* obj = myLinkedListCreate();
 // int param_1 = myLinkedListGet(obj, index);
 
  myLinkedListAddAtHead(obj, 1);
 
  myLinkedListAddAtTail(obj, 2);
 
  myLinkedListAddAtIndex(obj, 0, 3);
 
  myLinkedListDeleteAtIndex(obj, 1);
 
  //myLinkedListFree(obj);
 printf("result is %d\n\t", myLinkedListGet(obj, 0));
return 0;
}


