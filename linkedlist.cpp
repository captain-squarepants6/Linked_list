#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *head)

{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insertBegin(Node *head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printList(head);
}

void insertEnd(Node *head, int value)
{
    Node *temp = head;
    Node *newNode = new Node;
    newNode->data = value;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = nullptr;
    printList(head);
}

void insertBetween(Node *head, int value, int position)
{

    Node *temp = head;
    Node *newNode = new Node;
    newNode->data = value;
    while (temp->data != position)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printList(head);
}
void insertBetweenBefore(Node *head, int value, int position)
{

    Node *temp = head;
    Node *newNode = new Node;
    newNode->data = value;
    while (temp->next->data != position)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printList(head);
}

int main()
{

    Node *firstNode = new Node;
    Node *secondNode = new Node;
    Node *thirdNode = new Node;
    Node *fourthNode = new Node;
    Node *fifthNode = new Node;
    Node *head = firstNode;

    firstNode->data = 10;
    secondNode->data = 20;
    thirdNode->data = 30;
    fourthNode->data = 40;
    fifthNode->data = 50;

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = nullptr;

    insertBetweenBefore(head, 60, 30);
    return 0;
}