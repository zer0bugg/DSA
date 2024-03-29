#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};


class SinglyLinkedList{
    public:

    Node *head;
    Node *tail;

    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
    }


    void updateAtPosition(int position, int val)
    {
        int curr_pos = 0;
        Node *temp = head;

        while (curr_pos != position)
        {
            temp = temp->next;
            curr_pos++;
        }
        temp->data = val;
    }


    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};


int main()
{

    SinglyLinkedList sll;

    sll.updateAtPosition(0, 22);

    sll.display();

    return 0;
}
