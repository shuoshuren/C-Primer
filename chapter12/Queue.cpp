//
// Created by xiao on 2017/1/13.
//

#include <iostream>
#include <cstdlib>
#include "Queue.h"

/**
 * 构造函数 成员初始化列表
 * @param qs
 */
Queue::Queue(int qs) :qSize(qs){
    front = rear = nullptr;
    items = 0;

}

/**
 * 析构函数
 */
Queue::~Queue(){
    PNODE temp;
    while (front != nullptr){
        temp = front;
        front = front->pNext;
        delete temp;

    }
}

/**
 * 队列是否是空的
 * @return
 */
bool Queue::isEmpty() const {
    return 0 == items;
}

/**
 * 队列是否已经满了
 * @return
 */
bool Queue::isFull() const {
    return qSize == items;
}

/**
 * 队列中存放数据的个数
 * @return
 */
int Queue::queueCount() const {
    return items;
}

/**
 * 添加数据到队列末尾
 * @param item
 * @return
 */
bool Queue::enqueue(const Item &item) {
    if(isFull()) return false;

    PNODE add = new NODE;
    if(nullptr == add){
        std::cout<<"分配内存失败"<<std::endl;
        exit(EXIT_FAILURE);
        return false;
    }
    add->item = item;
    add->pNext = nullptr;
    items++;
    if(nullptr == front){
        front = add;
    }else{
        rear->pNext = add;
    }
    rear = add;
    return true;
}

/**
 * 删除队首的数据
 * @param item
 * @return
 */
bool Queue::dequeue(Item &item) {
    if(isEmpty()) return false;
    if(nullptr == front) return false;
    item = front->item;
    items--;
    PNODE temp = front;
    front = front->pNext;
    delete temp;
    if(isEmpty()){
        rear = nullptr;
    }
    return true;


}
