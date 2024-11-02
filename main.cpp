#include <iostream>

//

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

void printForward (Node* head)
{
    Node* traversal = head;
    while (traversal != NULL)
    {
        std::cout << traversal->data << " ";
        traversal = traversal->next;
    }
}
void printBackward (Node* tail)
{
    Node* backward = tail;
    while (backward != NULL)
    {
        std::cout << backward->data << " ";
        backward = backward->prev;
    }
}

int main()
{
    Node* head = new Node();
    Node* tail = new Node();

    // Create the first node of double linked list
    Node *node = new Node();
    node -> next = nullptr;
    node -> prev = nullptr;
    node -> data = 4;
    head = node;
    tail = node;
    //**************************************************

    // Add the second node.
    node = new Node();
    node -> data = 5;
    node -> next = nullptr;
    node -> prev = tail;
    tail -> next = node;
    tail = node;

    // Add the third node.
    node = new Node();
    node -> data = 6;
    node -> next = nullptr;
    node -> prev = tail;
    tail -> next = node;
    tail = node;

    printForward(head);
    std::cout << std::endl;
    printBackward(tail);




    return 0;
}
