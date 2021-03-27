#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *start=NULL;

void InsertN(int data)
{
    Node *item=new Node();
    item->data=data;
    item->next=start;

    start=item;

}


void PrintRev(Node *head)
{
    if(head==NULL)
        return;
    else
        PrintRev(head->next);

    cout<<head->data<<endl;
}

int main()
{
    PrintRev(start);

    return 0;
}
