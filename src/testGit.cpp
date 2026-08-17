#include "testGit.h"
#include <iostream>

void deleteNode(Node*& head, Node* p) {
    if (head == nullptr || p == nullptr) {
        return;
    }

    // 处理头节点
    if (head == p) {
        head = p->next;
    }

    // 修改前驱节点的指向
    if (p->prev != nullptr) {
        p->prev->next = p->next;
    }

    // 修改后继节点的指向
    if (p->next != nullptr) {
        p->next->prev = p->prev;
    }

    delete p;
}

void append(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " <-> ";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}