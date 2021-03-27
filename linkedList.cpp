#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* start=NULL;

void insertNodeB(int data)
{
    Node* item=new Node();

    item->data=data;
    item->next=start;
    start=item;
}

void insertNodeM(int data,int pos)
{
    Node* item=new Node();

    item->data=data;
    item->next=NULL;

    if(pos==1){
        item->next=start;
        start=item;
        return;
    }

    Node* temp=start;

    for(int i=1;i<pos-1;i++)
        temp=temp->next;

    item->next=temp->next;
    temp->next=item;
}

void insertE(int data)
{
    Node* item=new Node();

    item->data=data;
    item->next=NULL;

    if(start==NULL){
        item->next=start;
        start=item;
        return;
    }

    Node* temp=start;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=item;
}

void printReverse(Node* temp)
{
    if(temp==NULL)
        return;
    printReverse(temp->next);
    cout<<temp->data<<" ";

    //cout<<endl;
}

void printList()
{
    Node* temp=start;
    cout<<"The list is:"<<endl;
    while(!temp==NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Delete(int pos)
{
    Node* temp=start;
    for(int i=1;i<pos-1;i++)
        temp=temp->next;
    Node* temp2=temp->next;
    temp->next=temp2->next;

    free(temp2);
}
int main()
{
    int n,data;
    cin>>n;
    while(n--){
        cin>>data;
        insertNodeB(data);
        printList();
    }


    insertNodeM(3,3);
    printList();

    insertE(10);
    printList();
    cout<<endl;

    printReverse(start);

    Delete(3);

    printList();

    return 0;
}
