#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    };
};

int main()
{
    Node *Head;
    Node *temp;
    Head = new Node(4);
    temp = new Node(243);
    temp->next = Head;
    Head = temp;
    cout << endl
         << Head->data;
    return 0;
}