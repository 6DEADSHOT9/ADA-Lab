#include <stdio.h>

// Reverse a singly linked list without recursion.

struct Node {
    int value;
    Node *next;
};

Node* reverse(Node *head) {
    if (!head || !head->next) return head;
    Node *pre = NULL, *cur = head, *next = head->next;
    while (cur) {
        cur->next = pre;
        pre = cur;
        cur = next;
        if (next) next = next->next;
    }
    return pre;
}

void print_list(Node *head) {
    Node *cur = head;
    while (cur) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    Node *head = new Node{1, NULL};
    Node *cur = head;
    for (int i = 2; i < 10; ++i) {
        cur->next = new Node{i, NULL};
        cur = cur->next;
    }
    print_list(head);
    head = reverse(head);
    print_list(head);
    return 0;
}