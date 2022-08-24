/* * Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved. * Description: 考生实现代码 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除 */ 
#include <iostream> 
#include <string>
#include<mutex>

using namespace std; 

 typedef struct space {
    void * addr;
    int size;
} space;

typedef Listnode {
    space* head;
    bool used;
    Listnode* next;
    Listnode(space *sp, bool used, Listnode* next) :head(sp), used(used), next(next) {};
} Listnode;

class MiniMemoryPool { 

    private:
            void* addr;
            int size;
             bool used;
             Listnode* free;
             Listnode* full;
    public: // 返回分配的内存首地址,失败返回 -1 
    MiniMemoryPool () {
      add = (void *) malloc(100 *sizeof(char));
        size = 100;
        used = false;
        space  sp ;
        sp.addr = add;
        sp.size = 100;
        Listnode node = 
    }
    
   int Request(int size) { 
       lock_guard<mutex> lock(mutex);  
       
       return 0;
   } 
   // 释放内存地址, 成功返回 true, 失败返回 false 
   bool Release(int startAddr) { return true; } 
}; 
int main() { 
    int num; 
    cin >> num; 
    MiniMemoryPool pool; 
    for (int loop = 0; loop < num; loop++) { 
        string line; 
        cin >> line; 
        string commond = line.substr(0, line.find_first_of('=')); 
        if (commond == "REQUEST") 
        { 
            int size = stoi(line.substr(line.find_first_of('=')+1)); 
            int result = pool.Request(size); 
            if (result != -1) { cout << result << endl; 
            } 
            else { 
                cout << "error" << endl; 
            } 
        } else if (commond == "RELEASE") 
        { 
            int addr = stoi(line.subst 

            int addr = stoi(line.substr(line.find_first_of('=')+1)); 
            if (!pool.Release(addr)) { 
            cout << "error" << endl; 
            } 
         } 
        } 
    return 0; 
} 
