#include<pthread.h>
#include<stdio.h>
#include<sys/queue.h>
#include<stdlib.h>

typedef struct hotpath_node{
   int data;
   SIMPLEQ_ENTRY(hotpath_node) entry;
}hotpath_node;

SIMPLEQ_HEAD(Queue, hotpath_node);
struct Queue paths;

void *workfunc(void * argv) {
    
    SIMPLEQ_HEAD(, hotpath_node) paths;
    paths.sqh_first = ((SIMPLEQ_HEAD(, hotpath_node) *) argv)->sqh_first;
    paths.sqh_last =  ((SIMPLEQ_HEAD(, hotpath_node) *) argv)->sqh_last;
    hotpath_node *item;
    SIMPLEQ_FOREACH(item, &paths, entry) {                                
        printf("data: %d  ", item->data);                                       
    }  
    printf("\n");
    pthread_exit(NULL);
}

void init() {
    for(int i = 0; i < 50; ++i) {
        hotpath_node *path = (hotpath_node *) malloc(sizeof(hotpath_node));
        path->data = i;
        SIMPLEQ_INSERT_TAIL(&paths, path, entry);
    }
}

int main(){
    pthread_t th[50];
    SIMPLEQ_INIT(&paths);

    init();
   for(int i = 0; i < 50; ++i) {
        int ret = pthread_create(&th[i], NULL, workfunc, (void *)&paths);
        if(ret) {
            printf("thread don't create");
        }
    }

    return 0;
}
