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

    SinglyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int d)
    {
        Node *newNode = new Node(d);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        tail = newNode;
        return;
    }


    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    void reverseDisplay()
    {
        Node *prev, *curr, *next;
        prev = NULL;
        curr = head;

        if(head == NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        if(head->next == NULL){
            cout<<head->data<<"->NULL";
            return;
        }

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        Node *temp = prev;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return;
    }
};

int main()
{
    SinglyLinkedList sll;

    sll.insertAtEnd(1);
    sll.insertAtEnd(2);
    sll.insertAtEnd(3);
    sll.insertAtEnd(4);
    sll.insertAtEnd(5);

    //sll.display();
    sll.reverseDisplay();

    return 0;
}
