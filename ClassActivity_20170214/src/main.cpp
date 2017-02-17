//
//  main.cpp
//  ClassActivity 20170214
//
//  Created by Mario Personal on 2/14/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <iostream>

using namespace std;

template <typename E> class SLinkedList;

template <typename E>
class SNode {
private:
    E elem;
    SNode<E> *next;
    friend class SLinkedList<E>;
};

template <typename E>
class SLinkedList {
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    E& front();
    void addFront(const E& e);
    void removeFront();
    int size() const;
private:
    SNode<E>* head;
    int n;
};

template <typename E>
SLinkedList<E>::SLinkedList(): head(NULL), n(0) {
}

template <typename E>
bool SLinkedList<E>::empty() const {	// is list empty?
    return head == NULL; // can also use return (n == 0);
}

template <typename E>
E& SLinkedList<E>::front() {		// return front element
    if (empty()) throw length_error("empty list");
    return head->elem;
}

template <typename E>
SLinkedList<E>::~SLinkedList() {			// destructor
    while (!empty()) removeFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {	// add to front of list
    SNode<E>* v = new SNode<E>;		// create new node
    v->elem = e;				// store data
    v->next = head;				// head now follows v
    head = v;				// v is now the head
    n++;
}

template <typename E>
void SLinkedList<E>::removeFront() {		// remove front item
    if (empty()) throw length_error("empty list");
    SNode<E>* old = head;			// save current head
    head = old->next;			// skip over old head
    delete old;				// delete the old head
    n--;
}

template <typename E>
int SLinkedList<E>::size() const {				// list size
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}