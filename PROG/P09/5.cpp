#include <iostream>
#include <vector>
#include <iomanip>

template <typename T>
struct node {
    T value;
    node<T>* next; 
};

template <typename T>
class Stack {
public:
    Stack();
    ~Stack();
    size_t size() const;
    bool peek(T& elem) const;
    bool pop(T& elem);
    void push(const T& elem);
private:
    int size_;
    node<T>* top_;
};

template <typename T>
Stack<T>::Stack(): size_(0), top_(nullptr) {}

template <typename T>
Stack<T>::~Stack() {
    while (top_ != nullptr) {
        node<T>* temp = top_;
        top_ = top_->next;
        delete temp;
    }
}

template <typename T>
size_t Stack<T>::size() const {return size_;}

template <typename T>
bool Stack<T>::peek(T& elem) const {
    if(top_ == nullptr)
        return false;
    elem = top_->value;
    return true;
}

template <typename T>
bool Stack<T>::pop(T& elem) {
    if(top_ == nullptr)
        return false;
    elem = top_->value;
    node<T>* temp = top_;
    top_ = top_->next;
    delete temp;
    size_--;
    return true;
}

template <typename T>
void Stack<T>::push(const T& elem) {
    node<T>* temp = new node<T>;
    temp->value = elem;
    temp->next = top_;
    top_ = temp;
    size_++;
}