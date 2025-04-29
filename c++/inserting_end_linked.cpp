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
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Node *Head;
    Node *Tail = Head = NULL;
    for (int i = 0; i < 8; i++)
    {
        if (Head == NULL)
        {

            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
Tail->next = new Node(arr[i]);
Tail = Tail->next;
        }
    }

    Node *temp;
    temp= Head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}