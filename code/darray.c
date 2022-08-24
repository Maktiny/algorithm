#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int* addr;
    int capacity;
    int size;
} array;

array * init_array() {
    array* myarray = (array*) malloc(sizeof(array));

    myarray->capacity = 20;
    myarray->size = 0;
    myarray->addr = (int *) malloc(myarray->capacity * sizeof(int));

    return myarray;
}

void push_back(array* arr , int val) {
    if(arr == NULL) return;

    if(arr->capacity == arr->size) {
        //int* newarr = (int *) malloc(arr->capacity * 2 * sizeof(int));
        //memcpy(newarr, arr->addr, arr->capacity * sizeof(int));
        //free(arr->addr);
        arr->addr = realloc(arr->addr, arr->capacity * 2);
        arr->capacity = arr->capacity * 2;
        //arr->addr = newarr;
    }
    arr->addr[arr->size] = val;
    arr->size++;
}


void pop_back(array *arr, int index) {
    if(arr == NULL) return;

    if(index < 0 || index >= arr->size) return ;

    for(int i = index; i < arr->size - 1; ++i) {
        arr->addr[i] = arr->addr[i + 1];
    }
    arr->size--;
}





//strlen的实现

int strlen(const char* str) {
    int ret = 0;
    while(*str != '\0') {
        ++str;
        ++ret;
    }
    return ret;
}


//memcpy的实现
void* memcpy(void* des, void* src, int n) {
    if(des == NULL || src == NULL || n <= 0) return NULL;
    
    char* pdes = (char*)des;
    char* psrc = (char*)src;

    if(pdes > psrc && pdes < psrc + n) {
        pdes = pdes + n -1;
        psrc = psrc + n -1;
        while(n--) {
            *pdes = *psrc;
            --pdes;
            --psrc;
        }
    }
    else{
        while(n--) {
            *pdes = *psrc;
            ++pdes;
            ++psrc;
        }
    }
    return des;
}


int main() {

}
