#include<stdio.h>
//自旋锁的原理：但锁被其他的进程持有的时候，申请锁的进程一直回旋等待。
struct spinlock{
    int locked; //持有锁把locked置1；
};

void acquire(struct spinlock *lock) {
    for (;;) {
        if(!lock->locked) {
            lock->locked = 1;
            break;
        }
    }
}
