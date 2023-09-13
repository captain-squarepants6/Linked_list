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




void deleteBetween(Node * head, int positon){

    Node * temp = head;

    while (temp->next->data != positon)
    {
        temp = temp->next;
    }

    Node * waste = temp;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
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

    deleteBetween(head,40 );
 
    


}



    
 