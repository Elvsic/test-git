#pragma once


// 1. 在头文件中定义双向链表节点
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// 2. 函数声明（暴露给外部调用的接口）

/**
 * 删除双向链表中的指定节点 p
 * @param head 链表头指针的引用
 * @param p 待删除节点的指针
 */
void deleteNode(Node*& head, Node* p);

/**
 * 辅助函数：向链表末尾插入节点
 */
void append(Node*& head, int data);

/**
 * 辅助函数：打印链表
 */
void printList(Node* head);

