#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert at head
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
// insert at tail
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
// print
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// insert at middle
void insertatanypos(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < position - 1) // if position indexing like array then count<=position-1
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
// delete
void deletenode(node *&head, int position)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node *current = head;
        node *previous = NULL;
        int count = 0;
        while (count < position - 1) // if position indexing like array then count<=position-1
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

// reverse a link list
node *reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    int count = 0;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

// check if circular or not
int circular(node *head)
{
    if (head == NULL)
    {
        return 1;
    }

    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return 1;
    }

    return 0;
}

// reverse in k node
node *kreverse(node *&head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = kreverse(forward, k);
    }

    return prev;
}
// length of ll
int length(node *&head)
{
    int len = 0;
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
// middle element
int middles(node *&head)
{

    node *temp = head;
    int cnt = 0;
    int ans = length(head) / 2;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp->data;
}
// detect a loop
node *floydcycledetection(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *fast = head;
    node *slow = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
        {
            return slow;
        }
    }
    return NULL;
}

// find start of loop
node *startnode(node *&head)
{

    if (head == NULL)
    {
        return NULL;
    }

    node *intersection = floydcycledetection(head);
    if (intersection == NULL)
    {
        return NULL;
    }

    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
// delete loop
node *deleteloop(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *startofloop = startnode(head);
    if (startofloop == NULL)
    {
        return head;
    }
    node *temp = startofloop;
    // startnode se ek pehle
    while (temp->next != startofloop)
    {

        temp = temp->next;
    }
    temp->next = NULL;
}
// delete duplicate element
node *removeduplicatesorted(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *current = head;
    while (current != NULL)
    {
        if ((current->next != NULL) && current->data == current->next->data)
        {
            // to save current ka next
            node *next_ka_next = current->next->next;
            node *nodetodelete = current->next;
            delete (nodetodelete);
            current->next = next_ka_next;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}
// sort 0 1 2
node *sort012(node *&head)
{
    node *temp = head;
    node *temp1 = head;
    int c0 = 0, c1 = 0, c2 = 0;
    while (temp != NULL)
    {

        if (temp->data == 0)
        {
            c0++;
        }
        else if (temp->data == 1)
        {
            c1++;
        }
        else if (temp->data == 2)
        {
            c2++;
        }
        temp = temp->next;
    }
    for (int i = 1; i <= c0; i++)
    {
        temp1->data = 0;
        temp1 = temp1->next;
    }
    for (int i = 1; i <= c1; i++)
    {
        temp1->data = 1;
        temp1 = temp1->next;
    }
    for (int i = 1; i <= c2; i++)
    {
        temp1->data = 2;
        temp1 = temp1->next;
    }

    return head;
}

// merge two sorted ll
node *merge(node *&head1, node *&head2)
{
    node *result = NULL;

    /* Base cases */
    if (head1 == NULL)
        return (head2);
    else if (head2 == NULL)
        return (head1);

    if (head1->data <= head2->data)
    {
        result = head1;
        result->next = merge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = merge(head1, head2->next);
    }
    return (result);
}

// check if ll is palindrome
void palindrome(node *&head)
{
    node *temp = head;
    int flag = 0;
    int n = 5;
    int *a = new int[n];
    int i = 0;
    while (temp != NULL && i < 5)
    {
        a[i] = temp->data;
        i++;
        temp = temp->next;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1])
        {
            flag = 1;
            break;
        }
        n--;
    }
    if (flag == 0)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "no";
    }
}
void tovector(vector<int> &v, node *head)
{
    while (head != NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
}

node *tolist(vector<int> v)
{
    node *temp = new node(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        node *temp1 = new node(v[i]);
        temp->next = temp1;
        temp = temp1;
    }
    return temp;
}
int main()
{

    node *n1 = new node(5);
    node *head = n1;

    insertathead(head, 1);
    insertathead(head, 0);
    insertathead(head, 2);
    insertathead(head, 1);
    node *n2 = sort012(head);
    print(n2);

    // to create loop

    /*node*temp=head;
    while(temp->next!=NULL){temp=temp->next;} //temp become tail
    temp->next=head->next;*/
}
