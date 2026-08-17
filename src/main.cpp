#include <iostream>
#include "testGit.h" // 包含接口头文件

int main() {
    Node* head = nullptr;

    append(head, 40);
    append(head, 50);
    append(head, 30);

    std::cout << "原始链表: ";
    printList(head);

    // 获取节点 20 并删除
    Node* target = head->next;
    deleteNode(head, target);

    std::cout << "删除后链表: ";

    std::cout << "第四次提交: ";
    std::cout << "git-4: ";


    printList(head);

    return 0;
}