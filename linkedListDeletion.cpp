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

int findPosition(Node *head, int position)
{
    Node *temp = head;
    int count = 1;

    while (temp->data != position)
    {
        temp = temp->next;
        count = count + 1;
    }
    return count;
    
}

void deleteBegin(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    printList(head);
}
void deleteEnd(Node *head)
{
    Node *temp = head;
    Node *waste;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    waste = temp->next;
    temp->next = nullptr;
    delete waste;
    printList(head);
}

void deleteBetween(Node *head, int position)
{
    Node *temp = head;
    while (temp->data != position)
    {
        temp = temp->next;
    }
    Node *waste = temp->next;
    temp->next = temp->next->next;
    delete waste;
    printList(head);
}

void deleteBetweenBefore(Node *head, int position)
{
    Node *temp = head;
    while (temp->next->data != position)
    {
        temp = temp->next;
    }
    Node *waste = temp->next;
    temp->next = temp->next->next;
    delete waste;
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

    firstNode->data = 11;
    secondNode->data = 85;
    thirdNode->data = 77;
    fourthNode->data = 47;
    fifthNode->data = 80;

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = fifthNode;
    fifthNode->next = nullptr;
    int myPosition = findPosition(head,47);
    cout<<myPosition;
    return 0;
}