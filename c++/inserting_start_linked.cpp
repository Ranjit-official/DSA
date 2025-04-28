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
    Node *HEAD;
    HEAD = NULL;
    for (int i = 0; i < 8; i++)
    {
        if (HEAD == NULL)
        {
            HEAD = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = HEAD;
            HEAD = temp;
        }
    }
    Node *temp;
    temp = HEAD;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}