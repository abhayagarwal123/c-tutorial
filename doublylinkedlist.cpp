#include <iostream>
#include <math.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// traverse
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(node *&head, int d)
{
    // if empty list
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }

    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(node *&tail, int d)
{
    // if empty list
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatmiddle(node *&tail, node *&head, int position, int d)
{

    // at first position
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
      temp = temp->next;
          count++;
    }

    // at last position
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // at somewhere middle
    //  first is temp then we have temp->next between which nodetoinsert had to insert
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deletenode(node *&head, int position)
{
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node *current = head;
        node *previous = NULL;
        int count = 1;
        while (count < position)
        {//dono ko aage badha do
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next->prev = current->prev;
        current->next = NULL;
        current->prev = NULL;

        delete current;
    }
}
int main()
{

    node *n1 = new node(10);
    node *head = n1;
    node *tail = n1;
    print(head);
    cout << length(head) << endl;
    insertathead(head, 12);

    insertattail(tail, 13);
    insertattail(tail, 16);
    insertattail(tail, 43);
    cout << head->data << endl;
    insertatmiddle(tail, head, 3, 4);
    print(head);
    insertatmiddle(tail, head, 7, 4);
    print(head);
    deletenode(head, 2);
    print(head);
}