#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};






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
 findPosition(head,50);
}