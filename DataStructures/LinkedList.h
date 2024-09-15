#include <iostream>
#include <stdexcept>

class Node {
public:
    int val;
    Node *next;

    Node() : Node(0, nullptr) {};
    Node(int val) : Node(val, nullptr) {};
    Node(Node *next) : Node(0, next) {};
    Node(int val, Node *next) : val(val), next(next) {};
};

class LinkedList {
public:
    Node *head;
    int size;
    LinkedList() : head(nullptr), size(0) {};

    void push(int val);
    int valueAt(int index);
    void removeAt(int index);
    void print();
};