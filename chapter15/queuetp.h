//
// Created by xiao on 2017/1/17.
//

#ifndef CHAPTER15_QUEUETP_H
#define CHAPTER15_QUEUETP_H

template<class Item>
class QueueTP {
private:
    enum {
        Q_Size = 10
    };

    class Node {
    public:
        Item item;
        Node *next;
        Node(const Item &item):item(item),next(nullptr){}

    };

    Node *front;
    Node *rear;
    int items;
    const int qSize;
    QueueTP(const QueueTP& q):qSize(0){};
    QueueTP & operator=(const QueueTP &p){return *this;}

public:
    QueueTP(int qsize=Q_Size);
    ~QueueTP();
    bool isEmpty()const{return items==0;}
    bool isFull()const{return items==qSize;}
    int queueCount()const {return items;}
    bool enqueue(const Item &item);
    bool dequeue(Item &item);


};


template <class Item>
QueueTP<Item>::QueueTP(int qsize):qSize(qsize){
    front = rear = nullptr;
    items = 0;

};

template <class Item>
QueueTP<Item>::~QueueTP() {
    Node *temp;
    while (front != nullptr){
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class Item>
bool QueueTP<Item>::enqueue(const Item &item) {
    if(isFull()) return false;

    Node *add = new Node(item);
    items++;
    if(front== nullptr){
        front = add;
    }else{
        rear->next = add;
    }
    rear = add;
    return true;
}

template <class Item>
bool QueueTP<Item>::dequeue(Item &item) {
    if(isEmpty()) return false;

    item = front->item;
    items--;
    Node *node = front;
    front = front->next;
    delete node;
    if(isEmpty()){
        rear = nullptr;
    }
    return true;

}



#endif //CHAPTER15_QUEUETP_H
