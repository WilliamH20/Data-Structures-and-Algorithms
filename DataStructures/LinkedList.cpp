#include "LinkedList.h"
using namespace std;

// Time: O(n)
void LinkedList::push(int val) {
    if (!head) {
        head = new Node(val);
        size++;
        return;
    }
    
    Node *tmp = head;
    while(tmp->next != nullptr) {
        tmp = tmp->next;
    }

    tmp->next = new Node(val);
    size++;
}

// Time: O(n)
int LinkedList::valueAt(int index) {
    if (index >= size || index < 0) throw length_error("index is not within the bounds [0, size)");
    Node *tmp = head;

    for (int i = 0; i < index; i++) {
        tmp = tmp->next;
    }

    return tmp->val;
}

// Time: O(n)
void LinkedList::removeAt(int index) {
    if (index >= size || index < 0) throw length_error("index is not within the bounds [0, size)");

    if (index == 0) { 
        head = head->next;
        size--;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < index - 1; i++) {
        tmp = tmp->next;
    }

    Node *toFree = tmp->next;
    tmp->next = tmp->next->next;
    size--;
    free(toFree);
}

void LinkedList::print() {
    cout << "[";
    Node *tmp = head;
    for (int i = 0; i < size; i++) {
        cout << tmp->val;

        if (i != size - 1) cout << ",";
        tmp = tmp->next;
    }
    cout << "]\n";
}