#include <stddef.h>

// Definition of a Node in a singly linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new Node
struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    return temp;
}