#include<stdio.h>


void *memcopy(void* des, void* src, int n) {
    if(des == NULL || src == NULL || n < 0) return des;

    char* pdes = (char *) des;
    char* psrc = (char *) src;

    if(pdes > psrc && pdes < psrc + n) {//存在覆盖情况  |src     |des          |   |
        pdes = pdes + n - 1;
        psrc = psrc + n - 1;
        while(n--) {
            *pdes = *psrc;
            --pdes;
            --psrc;
        }
    }
    else {
        while(n--) {
            *pdes = *psrc;
            ++pdes;
            ++psrc;
        }
    }
    return des;
}
