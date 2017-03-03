//
// Created by xiao on 2017/1/13.
//

#ifndef CHAPTER12_QUEUE_H
#define CHAPTER12_QUEUE_H

#include "Customer.h"

/**
 * 队列
 */
class Queue {
private:
    typedef struct Node{
        Item item;
        struct Node *pNext;

    }NODE,*PNODE;
    enum {
        Q_SIZE = 10
    };
    PNODE front; //指向前一个的node的指针
    PNODE rear; //指向下一个的node的指针
    int items; //item的个数
    const int qSize;//最大的队列item数

    Queue(const Queue &q):qSize(0){};
    Queue & operator=(const Queue &q){ return *this;};

public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int queueCount() const;
    bool enqueue(const Item &item); //添加到队列
    bool dequeue(Item &item);//从队列中删除

};


#endif //CHAPTER12_QUEUE_H
