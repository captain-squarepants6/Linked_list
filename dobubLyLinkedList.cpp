#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
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

void findPosition(Node *head, int position)
{
    Node *temp = head;
    int count = 1;

    while (temp->data != position)
    {
        temp = temp->next;
        count = count + 1;
    }
    cout << count;
}

void insertionBegin(Node *head, int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
    newnode->prev = nullptr;
    newnode->next->prev = newnode;
    printList(head);
}

void insertionend(Node *head, int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;

    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=nullptr;
    printList(head);
}
void insertionBetween(Node *head,int value,int position)
{
    Node* newnode= new Node;
    newnode->data=value;
    Node* temp=head;
    while(temp->next->data !=position){
        temp=temp->next;


    }

    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev=newnode;
    temp->next= newnode;
    printList(head);


}
void insertionBetweenAfter(Node *head,int value,int position)
{
    Node* newnode= new Node;
    newnode->data=value;
    Node* temp=head;
    while(temp->data !=position){
        temp=temp->next;


    }

    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev=newnode;
    temp->next= newnode;
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
    firstNode->prev = nullptr;
    firstNode->next = secondNode;

    secondNode->data = 20;
    secondNode->prev = firstNode;
    secondNode->next = thirdNode;

    thirdNode->data = 30;
    thirdNode->prev = secondNode;
    thirdNode->next = fourthNode;

    fourthNode->data = 40;
    fourthNode->prev = thirdNode;
    fourthNode->next = fifthNode;

    fifthNode->data = 50;
    fifthNode->prev = fourthNode;
    fifthNode->next = nullptr;

    insertionBetweenAfter(head,55,30);
}