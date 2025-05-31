#include <iostream>

// Definition of a Node in a singly linked list
struct Node
{
    int data;   // Data part of the node
    Node *next; // Pointer to the next node in the list

    Node(int data) // Constructor to initialize the node with data
    {
        this->data = data;
        this->next = nullptr;
    }
};