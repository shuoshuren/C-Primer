//
// Created by xiao on 2017/1/17.
//

#ifndef CHAPTER14_STACKTP_H
#define CHAPTER14_STACKTP_H

template <typename Type>


class Stack {
private:
    enum{MAX=10};
    Type items[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    bool push(const Type & item);
    bool pop(Type &item);

};

template <typename Type>
Stack<Type>::Stack() {
    top = 0;
}

template <typename Type>
bool Stack<Type>::isEmpty() {
    return top == 0;
}


template <typename Type>
bool Stack<Type>::isFull() {
    return top == MAX;
}

template <typename Type>
bool Stack<Type>::push(const Type &item) {
    if(isFull()) return false;

    items[top++] = item;
    return true;

}

template <typename Type>
bool Stack<Type>::pop(Type &item) {
    if(isEmpty()) return false;

    item = items[--top];
    return true;
}

#endif //CHAPTER14_STACKTP_H
